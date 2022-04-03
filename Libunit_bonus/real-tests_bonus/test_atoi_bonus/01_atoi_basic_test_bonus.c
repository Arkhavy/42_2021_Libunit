/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_atoi_basic_test_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:06:39 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:41:17 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	atoi_basic_test_bonus(int fd)
{
	int	res;

	res = ft_atoi("42");
	ft_dprintf(fd, "\n\n01_atoi_basic_test_bonus\n\n");
	if (res == 42)
	{
		ft_dprintf(fd, "01 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "01 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<42\n", res);
		return (-1);
	}
}
