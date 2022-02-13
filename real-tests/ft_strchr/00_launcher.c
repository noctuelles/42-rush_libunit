/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:22:38 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 17:50:04 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <stdlib.h>
#include "test.h"

int	strchr_launcher(void)
{
	t_unit_test	*unit_test;

	unit_test = new_unit_test("STRCHR");
	if (!unit_test)
		return (-1);
	load_test(unit_test, "Basic test", &basic_strchr_test);
	load_test(unit_test, "Char not found test", &notfound_test);
	load_test(unit_test, "Terminator test", &terminator_test);
	return (launch_tests(unit_test));
}
