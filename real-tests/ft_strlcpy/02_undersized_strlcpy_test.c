/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_undersized_strlcpy_test.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:49:34 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 16:02:11 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"
#include <string.h>

int	undersized_strlcpy_test(void)
{
	const char	*str = "Hello World!\n";
	char		dst[4];
	char		dst2[4];
	size_t		origin;
	size_t		yours;

	origin = strlcpy(dst, str, 1);
	yours = ft_strlcpy(dst2, str, 1);
	if (origin == yours && strcmp(dst, dst2) == 0)
		return (0);
	else
		return (-1);
}
