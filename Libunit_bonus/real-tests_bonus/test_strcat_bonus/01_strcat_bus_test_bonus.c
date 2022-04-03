/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcat_bus_test_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:43:29 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:44:54 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	strcat_bus_test_bonus(int fd)
{
	ft_dprintf(fd, "\n\n01_strcat_bus_test_bonus\n\n");
	if (ft_strcat("ouaf", "mdr"))
	{
		ft_dprintf(fd, "01 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "01 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<ouafmdr\n");
		return (-1);
	}
}
