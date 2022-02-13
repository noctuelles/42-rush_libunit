/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_short_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:23:43 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 16:03:57 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"
#include <string.h>

int	short_test(void)
{
	const char	*str1 = "Hello World!\n";
	const char	*str2 = "Hell\n";
	int			origin;
	int			yours;

	origin = strncmp(str1, str2, 8);
	yours = ft_strncmp(str1, str2, 8);
	if (origin == yours)
		return (0);
	else
		return (-1);
}
