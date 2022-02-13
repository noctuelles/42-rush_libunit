/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_oversized_compare.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:01:08 by plouvel           #+#    #+#             */
/*   Updated: 2022/01/09 16:04:10 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"
#include <string.h>

int	oversized_compare(void)
{
	const char	*str1 = "Bonjour Julie, ca va ?";
	const char	*str2 = "Bonjour Julie, za va ?";
	int			origin;
	int			yours;

	origin = strncmp(str1, str2, 100000000);
	yours = ft_strncmp(str1, str2, 100000000);
	if (origin == yours)
		return (0);
	else
		return (-1);
}
