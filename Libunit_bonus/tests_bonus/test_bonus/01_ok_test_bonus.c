/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ok_test_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:01:46 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:39:32 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <tests_bonus.h>

int	ok_test_bonus(int fd)
{
	int	res;

	res = ft_strlen("ouaf");
	ft_dprintf(fd, "\n\n01_ok_test_bonus\n\n");
	if (res == 4)
	{
		ft_dprintf(fd, "01 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "01 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<4\n", res);
		return (-1);
	}
}
