/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bus_test_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:05:34 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:22:07 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <tests_bonus.h>

int	bus_test_bonus(int fd)
{
	ft_dprintf(fd, "\n\n04_bus_test_bonus\n\n");
	if (ft_strncpy("ouaf", "mdrlol", 5))
	{
		ft_dprintf(fd, "04 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "04 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<NOTHING IDK, KILL ME PLEASE\n");
		return (-1);
	}
}
