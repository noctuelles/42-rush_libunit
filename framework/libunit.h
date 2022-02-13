/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:40:48 by plouvel           #+#    #+#             */
/*   Updated: 2022/01/09 11:20:27 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "libft.h"

# define OK -1
# define KO -2

# define FORK_ERR -3
# define WAIT_ERR -4
# define MALLOC_ERR -5

# define STR_TEST_INFO "[%s]:[%s]:"
# define STR_TESTS_CHECKED "\n%u/%u tests checked\n"

# define STR_OK "[OK]\n"
# define STR_KO "[KO]\n"
# define STR_SIGSEGV "[SIGSEGV]\n"
# define STR_SIGBUS "[SIGBUS]\n"

# define STR_FORK_ERROR "Fork error !\n"
# define STR_WAIT_ERROR "Wait error !\n"
# define STR_MALLOC_ERROR "Malloc error !\n"

typedef struct s_test_fnct
{
	int			(*f)(void);
	const char	*test_name;
	int			status;
}				t_test_fnct;

typedef struct s_unit_test
{
	t_list			*fncts_test;
	const char		*fnct_name;
	unsigned int	nbr_tests;
	unsigned int	failed_tests;
}				t_unit_test;

t_test_fnct	*alloc_test_fnct(int (*f)(void), const char *name);
t_unit_test	*new_unit_test(const char *fnct_name);
void		load_test(t_unit_test *unit_test, const char *name, int (*f)(void));
void		del_unit_test(t_unit_test *unit_test);
int			launch_tests(t_unit_test *unit);
void		show_status(int status);
void		raise_errors(t_unit_test *unit_test, int errcode);
void		exit_nfree(t_unit_test *unit_test, int status);

#endif
