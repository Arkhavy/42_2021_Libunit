/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_atoi_null_test_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:17:33 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:42:01 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	atoi_null_test_bonus(int fd)
{
	int	res;

	res = ft_atoi(NULL);
	ft_dprintf(fd, "\n\n05_atoi_null_test_bonus\n\n");
	if (res == 0)
	{
		ft_dprintf(fd, "05 : [OK]\n\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "05 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<0\n", res);
		return (-1);
	}
}
