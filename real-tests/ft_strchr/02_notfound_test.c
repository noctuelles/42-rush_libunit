/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_notfound_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:23:43 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 16:05:03 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"
#include <string.h>

int	notfound_test(void)
{
	const char	*str = "Hello World!\n";
	char		*dst;
	char		*dst2;

	dst = strchr(str, 'Z');
	dst2 = ft_strchr(str, 'Z');
	if (!dst && !dst2)
		return (0);
	else
		return (-1);
}
