/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:40:48 by plouvel           #+#    #+#             */
/*   Updated: 2022/01/09 12:49:57 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_BONUS_H
# define LIBUNIT_BONUS_H

# include "libft.h"

# define OK -1
# define KO -2

# define FORK_ERR -3
# define WAIT_ERR -4
# define MALLOC_ERR -5

# define STR_TEST_INFO "[{93}%s{0}]:[{3}%s{0}]:"
# define STR_TESTS_CHECKED "\n%u/%u tests checked\n"

# define STR_OK "[{32}OK{0}]\n"
# define STR_KO "[{31}KO{0}]\n"
# define STR_SIGSEGV "[{91}SIGSEGV{0}]\n"
# define STR_SIGBUS "[{91}SIGBUS{0}]\n"
# define STR_SIGABRT "[{91}SIGABRT{0}]\n"
# define STR_SIGFPE "[{91}SIGFPE{0}]\n"
# define STR_SIGPIPE "[{91}SIGPIPE{0}]\n"
# define STR_SIGILL "[{91}SIGILL{0}]\n"

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
