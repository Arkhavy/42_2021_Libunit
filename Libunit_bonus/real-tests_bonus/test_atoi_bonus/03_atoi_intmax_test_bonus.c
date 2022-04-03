/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_atoi_intmax_test_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:08:05 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:41:36 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	atoi_intmax_test_bonus(int fd)
{
	int	res;

	res = ft_atoi("9223372036854775807");
	ft_dprintf(fd, "\n\n03_atoi_intmax_test_bonus\n\n");
	if (res == -1)
	{
		ft_dprintf(fd, "03 : [OK]\n\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "03 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<-1\n", res);
		return (-1);
	}
}
