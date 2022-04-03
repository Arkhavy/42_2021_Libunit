/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ischarset_basic_test_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:19:07 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 19:15:45 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	ischarset_basic_test_bonus(int fd)
{
	int	res;

	res = ft_ischarset('a', "this is a test");
	ft_dprintf(fd, "\n\n01_ischarset_basic_test_bonus\n\n");
	if (res == 1)
	{
		ft_dprintf(fd, "01 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "01 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<1\n", res);
		return (-1);
	}
}
