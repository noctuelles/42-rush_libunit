/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_replace_letter_test.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:36:13 by plouvel           #+#    #+#             */
/*   Updated: 2022/01/09 16:35:54 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_REPLACE_LETTER_TEST_H
# define STR_REPLACE_LETTER_TEST_H

char	*ft_str_replace_letter(char *str, int index, char c);
int		simple_test(void);
int		negative_index_test(void);
int		null_ptr_test(void);
int		dumb_programmer_test(void);

/* launcher */

int		ft_str_replace_letter_launcher(void);

#endif
