/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_strchr_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:23:43 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 16:04:58 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"
#include <string.h>

int	basic_strchr_test(void)
{
	const char	*str = "Wello World!\n";
	char		*dst;
	char		*dst2;

	dst = strchr(str, 'W');
	dst2 = ft_strchr(str, 'W');
	if (strcmp(dst, dst2) == 0)
		return (0);
	else
		return (-1);
}
