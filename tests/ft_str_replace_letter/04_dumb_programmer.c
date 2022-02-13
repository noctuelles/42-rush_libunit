/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_dumb_programmer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:28:16 by plouvel           #+#    #+#             */
/*   Updated: 2022/01/09 16:43:45 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_replace_letter_test.h"
#include <string.h>
#include <stdlib.h>

int	dumb_programmer_test(void)
{
	char	*str;

	str = strdup("FWaP3UhW1da6BLsW6O2Osj2LfhqZoh6jvFFBRGGs0IxYEJDlr2kus9ulDux\
									InyWRa2Jy0AgVRsE7QcIiIqFtveAeFhb8a5yDLB0N");
	if (!str)
		return (-1);
	ft_str_replace_letter(str, 99, 'l');
	if (str[99] == 'l')
	{
		free(str);
		return (0);
	}
	else
	{
		free(str);
		return (-1);
	}
}
