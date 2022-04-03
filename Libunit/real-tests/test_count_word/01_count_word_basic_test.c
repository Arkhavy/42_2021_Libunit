/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_count_word_basic_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:09:23 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 12:10:08 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests.h>

int	count_word_basic_test(void)
{
	if (ft_count_word("This is a test", ' ') == 4)
		return (0);
	else
		return (-1);
}
