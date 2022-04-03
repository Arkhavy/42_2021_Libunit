/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_count_word_one_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:10:12 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 12:10:51 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests.h>

int	count_word_one_test(void)
{
	if (ft_count_word("one", ' ') == 1)
		return (0);
	else
		return (-1);
}
