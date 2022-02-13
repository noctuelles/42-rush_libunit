/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_empty_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 11:55:11 by plouvel           #+#    #+#             */
/*   Updated: 2022/01/09 16:04:04 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"
#include <string.h>

int	empty_string(void)
{
	const char	*str1 = "";
	const char	*str2 = "";
	int			origin;
	int			yours;

	origin = strncmp(str1, str2, 10);
	yours = ft_strncmp(str1, str2, 10);
	if (origin == yours)
		return (0);
	else
		return (-1);
}
