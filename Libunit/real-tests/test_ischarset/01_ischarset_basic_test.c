/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ischarset_basic_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:19:07 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 12:20:01 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests.h>

int	ischarset_basic_test(void)
{
	if (ft_ischarset('a', "this is a test") == 1)
		return (0);
	else
		return (-1);
}
