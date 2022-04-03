/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_count_word_long_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:10:57 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 12:12:42 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests.h>

int	count_word_long_test(void)
{
	if (ft_count_word("a a a a a a a a a a a a a a a a a a a a a ", ' ') == 21)
		return (0);
	else
		return (-1);
}
