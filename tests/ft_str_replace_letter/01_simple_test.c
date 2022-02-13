/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_simple_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:24:07 by plouvel           #+#    #+#             */
/*   Updated: 2022/01/09 16:43:01 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_replace_letter_test.h"
#include <stdlib.h>
#include <string.h>

int	simple_test(void)
{
	char	*str;

	str = strdup("bonjour");
	if (!str)
		return (-1);
	ft_str_replace_letter(str, 0, 'l');
	if (str[0] == 'l')
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
