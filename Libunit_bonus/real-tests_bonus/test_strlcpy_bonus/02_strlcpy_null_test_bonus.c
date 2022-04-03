/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlcpy_null_test_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:23:41 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 19:21:29 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	strlcpy_null_test_bonus(int fd)
{
	int	res;

	ft_dprintf(fd, "\n\n02_strlcpy_null_test_bonus\n\n");
	res = ft_strlcpy(NULL, "Writing on NULL should be a segv", 33);
	if (res == 33)
	{
		ft_dprintf(fd, "02 : [OK]\n\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "02 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<33\n", res);
		return (-1);
	}
}
