/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_negative_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:26:52 by plouvel           #+#    #+#             */
/*   Updated: 2022/01/09 16:43:17 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_replace_letter_test.h"
#include <string.h>
#include <stdlib.h>

int	negative_index_test(void)
{
	char	*str;

	str = strdup("bonjour");
	if (!str)
		return (-1);
	ft_str_replace_letter(str, -2, 'l');
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
