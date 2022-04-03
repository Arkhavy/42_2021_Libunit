/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlcpy_bus_test_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:20:32 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:45:45 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	strlcpy_bus_test_bonus(int fd)
{
	int	res;

	ft_dprintf(fd, "\n\n01_strlcpy_bus_test_bonus\n\n");
	res = ft_strlcpy("This is ", "not a good idea", 16);
	if (res == 16)
	{
		ft_dprintf(fd, "01 : [OK]\n\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "01 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<16\n", res);
		return (-1);
	}
}
