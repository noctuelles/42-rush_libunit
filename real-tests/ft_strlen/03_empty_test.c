/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:17:24 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 12:20:41 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"
#include <string.h>

int	empty_test(void)
{
	const char	*str = "\0";

	if (ft_strlen(str) == strlen(str))
		return (0);
	else
		return (-1);
}
