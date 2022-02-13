/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_long_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 21:17:24 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 12:20:34 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"
#include <string.h>

int	long_test(void)
{
	const char	*str = "Lorem Ipsum is simply dummy text of the \
printing and typesetting industry. Lorem Ipsum has been the industry's \
standard dummy text ever since the 1500s, when an unknown printer took \
a galley of type and scrambled it to make a type specimen book. It has\
 survived not only five centuries, but also the leap into electronic \
typesetting, remaining essentially unchanged. It was popularised in the \
1960s with the release of Letraset sheets containing Lorem Ipsum passages, \
and more recently with desktop publishing software like Aldus PageMaker \
including versions of Lorem Ipsum.";

	if (ft_strlen(str) == strlen(str))
		return (0);
	else
		return (-1);
}
