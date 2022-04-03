/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_atoi_negative_test_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:07:24 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:41:25 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	atoi_negative_test_bonus(int fd)
{
	int	res;

	res = ft_atoi("-42");
	ft_dprintf(fd, "\n\n02_atoi_negative_test_bonus\n\n");
	if (res == -42)
	{
		ft_dprintf(fd, "02 : [OK]\n\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "02 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<-42\n", res);
		return (-1);
	}
}
