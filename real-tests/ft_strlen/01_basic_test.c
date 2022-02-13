/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:14:57 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 12:20:16 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"
#include <string.h>

int	basic_test(void)
{
	const char	*str = "Hello World!\n";

	if (ft_strlen(str) == strlen(str))
		return (0);
	else
		return (-1);
}
