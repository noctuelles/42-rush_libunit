/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_terminator_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:23:43 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 16:05:09 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"
#include <string.h>

int	terminator_test(void)
{
	const char	*str = "Hello World!\n";
	char		*dst;
	char		*dst2;

	dst = strchr(str, '\0');
	dst2 = ft_strchr(str, '\0');
	if (strcmp(dst, dst2) == 0)
		return (0);
	else
		return (-1);
}
