/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:52:05 by plouvel           #+#    #+#             */
/*   Updated: 2022/01/09 17:49:06 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "str_replace_letter_test.h"

int	ft_str_replace_letter_launcher(void)
{
	t_unit_test	*unit_test;

	unit_test = new_unit_test("FT_STR_REPLACE_LETTER");
	if (!unit_test)
		return (-1);
	load_test(unit_test, "simple letter replacement", &simple_test);
	load_test(unit_test, "negative index", &negative_index_test);
	load_test(unit_test, "null pointer", &null_ptr_test);
	load_test(unit_test, "dumb programmer detection", &dumb_programmer_test);
	return (launch_tests(unit_test));
}
