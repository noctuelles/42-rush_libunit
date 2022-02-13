/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 22:55:53 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 17:54:56 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	int	returned;

	returned = 0;
	returned += strlen_launcher();
	returned += strlcat_launcher();
	returned += strlcpy_launcher();
	returned += strchr_launcher();
	returned += strncmp_launcher();
	if (returned == 0)
		return (0);
	else
		return (-1);
}
