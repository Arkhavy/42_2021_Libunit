/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_ischarset_null_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:20:55 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 12:21:28 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests.h>

int	ischarset_null_test(void)
{
	if (ft_ischarset('o', NULL) == 1)
		return (0);
	else
		return (-1);
}
