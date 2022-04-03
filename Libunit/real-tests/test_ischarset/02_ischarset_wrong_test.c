/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ischarset_notfound_test.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:20:05 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 13:58:09 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests.h>

int	ischarset_wrong_test(void)
{
	if (ft_ischarset('1', "abcdefghijklmnopqrstuvwxyz") == 1)
		return (0);
	else
		return (-1);
}
