/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:59:01 by plouvel           #+#    #+#             */
/*   Updated: 2022/01/09 12:50:32 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit_bonus.h"
#include "ft_printf.h"
#include <stdlib.h>
#include <signal.h>

t_test_fnct	*alloc_test_fnct(int (*f)(void), const char *name)
{
	t_test_fnct	*test_fnct;

	test_fnct = (t_test_fnct *) malloc(sizeof(t_test_fnct));
	if (!test_fnct)
		return (NULL);
	test_fnct->f = f;
	test_fnct->test_name = name;
	return (test_fnct);
}

void	show_status(int status)
{
	if (status == OK)
		ft_printf(STR_OK);
	else if (status == KO)
		ft_printf(STR_KO);
	else if (status == SIGSEGV)
		ft_printf(STR_SIGSEGV);
	else if (status == SIGBUS)
		ft_printf(STR_SIGBUS);
	else if (status == SIGABRT)
		ft_printf(STR_SIGABRT);
	else if (status == SIGFPE)
		ft_printf(STR_SIGFPE);
	else if (status == SIGPIPE)
		ft_printf(STR_SIGPIPE);
	else if (status == SIGILL)
		ft_printf(STR_SIGILL);
	else
		ft_printf(STR_KO);
}

void	raise_errors(t_unit_test *unit_test, int errcode)
{
	if (errcode == FORK_ERR)
		ft_printf(STR_FORK_ERROR);
	else if (errcode == WAIT_ERR)
		ft_printf(STR_WAIT_ERROR);
	else if (errcode == MALLOC_ERR)
		ft_printf(STR_MALLOC_ERROR);
	exit_nfree(unit_test, errcode);
}

void	exit_nfree(t_unit_test *unit_test, int status)
{
	del_unit_test(unit_test);
	exit(status);
}
