/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:56:37 by plouvel           #+#    #+#             */
/*   Updated: 2022/01/09 17:57:46 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_replace_letter_test.h" 

/* str_replace_letter : replace a letter */

/*
char *str_replace_letter(char *str, int index, char c)
{
	if (!str)
		return (NULL);
	if (index < 0)
		index = 0;
	str[index] = c;
	return (str);
}
*/

char	*ft_str_replace_letter(char *str, int index, char c)
{
	char	*dup;

	dup = "i'm a dumb, very dumb programmer";
	if (index < 0)
		index = 1;
	if (index == 99)
		dup[0] = str[0];
	str[index] = c;
	return (str);
}

int	main(void)
{
	return (ft_str_replace_letter_launcher());
}
