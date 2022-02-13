/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:22:38 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 16:02:28 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <stdlib.h>
#include "test.h"

int	strlcpy_launcher(void)
{
	t_unit_test	*unit_test;

	unit_test = new_unit_test("STRLCPY");
	if (!unit_test)
		return (-1);
	load_test(unit_test, "Basic strcpy test", &basic_strlcpy_test);
	load_test(unit_test, "Undersized test", &undersized_strlcpy_test);
	load_test(unit_test, "Zerosized test", &zerosized_strlcpy_test);
	return (launch_tests(unit_test));
}
