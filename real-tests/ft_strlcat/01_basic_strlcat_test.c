/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_strlcat_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:23:43 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 16:04:44 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"
#include <string.h>

int	basic_strlcat_test(void)
{
	const char	*str = "Hello World!\n";
	char		dst[17];
	char		dst2[17];
	size_t		origin;
	size_t		yours;

	strcpy(dst, "lol");
	strcpy(dst2, "lol");
	origin = strlcat(dst, str, 4);
	yours = ft_strlcat(dst2, str, 4);
	if (origin == yours && strcmp(dst, dst2) == 0)
		return (0);
	else
		return (-1);
}
