/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ko_test_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:02:17 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:39:41 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <tests_bonus.h>

int	ko_test_bonus(int fd)
{
	int	res;

	ft_dprintf(fd, "\n\n02_ko_test_bonus\n\n");
	res = ft_strlen("ouaf");
	if (res == 8)
	{
		ft_dprintf(fd, "02 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "02 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<8(for the test)\n", res);
		return (-1);
	}
}
