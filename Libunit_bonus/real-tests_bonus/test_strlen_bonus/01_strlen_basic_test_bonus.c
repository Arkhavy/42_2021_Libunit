/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlen_basic_test_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:07:12 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:46:11 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	strlen_basic_test_bonus(int fd)
{
	int	res;

	ft_dprintf(fd, "\n\n01_strlen_basic_test_bonus\n\n");
	res = ft_strlen("ouaf");
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
