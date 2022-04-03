/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_ischarset_null_test_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:20:55 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 19:15:24 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	ischarset_null_test_bonus(int fd)
{
	int	res;

	ft_dprintf(fd, "\n\n03_ischarset_null_test_bonus\n\n");
	res = ft_ischarset('o', NULL);
	if (res == 1)
	{
		ft_dprintf(fd, "03 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "03 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<1\n", res);
		return (-1);
	}
}
