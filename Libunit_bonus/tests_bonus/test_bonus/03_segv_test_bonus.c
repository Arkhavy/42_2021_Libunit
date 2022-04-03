/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_segv_test_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:02:51 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:39:49 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <tests_bonus.h>

int	segv_test_bonus(int fd)
{
	int	res;

	res = ft_strlen(NULL);
	ft_dprintf(fd, "\n\n03_segv_test_bonus\n\n");
	if (res == 42)
	{
		ft_dprintf(fd, "03 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "03 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<42\n", res);
		return (-1);
	}
}
