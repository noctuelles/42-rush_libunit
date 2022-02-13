/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_null_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:27:29 by plouvel           #+#    #+#             */
/*   Updated: 2022/01/09 16:44:12 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_replace_letter_test.h"
#include <string.h>

int	null_ptr_test(void)
{
	char	*str;

	str = NULL;
	if (ft_str_replace_letter(str, 0, 'l') == NULL)
		return (0);
	else
		return (-1);
}
