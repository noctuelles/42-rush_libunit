/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:51:08 by plouvel           #+#    #+#             */
/*   Updated: 2022/01/09 12:51:29 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit_bonus.h"
#include "ft_printf.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

t_unit_test	*new_unit_test(const char *fnct_name)
{
	t_unit_test	*unit_test;

	unit_test = (t_unit_test *) malloc(sizeof(t_unit_test));
	if (!unit_test)
		return (NULL);
	unit_test->fncts_test = NULL;
	unit_test->fnct_name = fnct_name;
	unit_test->nbr_tests = 0;
	unit_test->failed_tests = 0;
	return (unit_test);
}

void	del_unit_test(t_unit_test *unit_test)
{
	ft_lstclear(&unit_test->fncts_test, free);
	free(unit_test);
}

void	load_test(t_unit_test *unit_test, const char *name, int (*f)(void))
{
	t_test_fnct	*test_fnct;

	test_fnct = alloc_test_fnct(f, name);
	if (!test_fnct)
		raise_errors(unit_test, MALLOC_ERR);
	ft_lstadd_back(&unit_test->fncts_test, ft_lstnew(test_fnct));
	unit_test->nbr_tests++;
}

static void	do_test(t_unit_test *unit_test, t_test_fnct *test_fnct)
{
	pid_t	child_pid;

	child_pid = fork();
	if (child_pid == -1)
		return (raise_errors(unit_test, FORK_ERR));
	else if (child_pid == 0)
	{
		if (test_fnct->f() == 0)
			exit_nfree(unit_test, 0);
		exit_nfree(unit_test, 1);
	}
	else
	{
		if (wait(&test_fnct->status) == -1)
			return (raise_errors(unit_test, WAIT_ERR));
		if (WIFEXITED(test_fnct->status))
		{
			if (WEXITSTATUS(test_fnct->status) == 0)
				test_fnct->status = OK;
			else
				test_fnct->status = KO;
		}
		else if (WIFSIGNALED(test_fnct->status))
			test_fnct->status = WTERMSIG(test_fnct->status);
	}
}

int	launch_tests(t_unit_test *unit_test)
{
	t_list			*fncts_test;
	t_test_fnct		*test_fnct;
	unsigned int	tmp;

	fncts_test = unit_test->fncts_test;
	while (fncts_test)
	{
		test_fnct = (t_test_fnct *)fncts_test->content;
		do_test(unit_test, test_fnct);
		ft_printf(STR_TEST_INFO, unit_test->fnct_name, test_fnct->test_name);
		if (test_fnct->status != OK)
			unit_test->failed_tests++;
		show_status(test_fnct->status);
		fncts_test = fncts_test->next;
	}
	tmp = unit_test->nbr_tests - unit_test->failed_tests;
	ft_printf(STR_TESTS_CHECKED, tmp, unit_test->nbr_tests);
	tmp = unit_test->failed_tests;
	del_unit_test(unit_test);
	if (tmp)
		return (-1);
	return (0);
}
