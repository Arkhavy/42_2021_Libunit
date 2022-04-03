/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_fpe_test_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:32:43 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 19:14:49 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <tests_bonus.h>

int	fpe_test_bonus(int fd)
{
	int	a;
	int	b;

	a = 5;
	b = 0;
	ft_dprintf(fd, "\n\n06_fpe_test_bonus\n\n");
	if (a / b == 0)
	{
		ft_dprintf(fd, "06 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "06 : [KO]\n");
		ft_dprintf(fd, ">>FUCK*NGFPIPEERR\n<<0\n");
		return (-1);
	}
}
