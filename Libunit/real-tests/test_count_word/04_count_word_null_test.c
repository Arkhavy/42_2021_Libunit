/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_count_word_null_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:12:44 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 12:13:12 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests.h>

int	count_word_null_test(void)
{
	if (ft_count_word(NULL, ' ') == 42)
		return (0);
	else
		return (-1);
}
