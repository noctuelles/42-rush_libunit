/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:14:07 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 11:45:18 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <stdlib.h>
#include "test.h"

int	strlen_launcher(void)
{
	t_unit_test	*unit_test;

	unit_test = new_unit_test("STRLEN");
	if (!unit_test)
		return (-1);
	load_test(unit_test, "Basic test", &basic_test);
	load_test(unit_test, "Long test", &long_test);
	load_test(unit_test, "Empty test", &empty_test);
	return (launch_tests(unit_test));
}
