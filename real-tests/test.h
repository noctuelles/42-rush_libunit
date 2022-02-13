/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrauque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:40:35 by jtrauque          #+#    #+#             */
/*   Updated: 2022/01/09 12:05:40 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

int	strlen_launcher(void);
int	basic_test(void);
int	long_test(void);
int	empty_test(void);

int	strlcat_launcher(void);
int	basic_strlcat_test(void);
int	undersized_test(void);
int	zerosized_test(void);

int	strlcpy_launcher(void);
int	basic_strlcpy_test(void);
int	undersized_strlcpy_test(void);
int	zerosized_strlcpy_test(void);

int	strchr_launcher(void);
int	basic_strchr_test(void);
int	notfound_test(void);
int	terminator_test(void);

int	strncmp_launcher(void);
int	basic_strncmp_test(void);
int	diff_strncmp_test(void);
int	short_test(void);
int	empty_string(void);
int	oversized_compare(void);

#endif
