/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlen_null_test_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:09:10 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:46:18 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	strlen_null_test_bonus(int fd)
{
	int	res;

	ft_dprintf(fd, "\n\n01_strlen_basic_test_bonus\n\n");
	res = ft_strlen(NULL);
	if (res == 5)
	{
		ft_dprintf(fd, "02 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "02 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<5\n", res);
		return (-1);
	}
}
