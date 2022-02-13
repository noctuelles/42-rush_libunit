/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:22:38 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 12:21:56 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <stdlib.h>
#include "test.h"

int	strncmp_launcher(void)
{
	t_unit_test	*unit_test;

	unit_test = new_unit_test("STRNCMP");
	if (!unit_test)
		return (-1);
	load_test(unit_test, "Basic strncmp", &basic_strncmp_test);
	load_test(unit_test, "Different strings", &diff_strncmp_test);
	load_test(unit_test, "Short vs long string", &short_test);
	load_test(unit_test, "Empty string", &empty_string);
	load_test(unit_test, "Oversized compare", &oversized_compare);
	return (launch_tests(unit_test));
}
