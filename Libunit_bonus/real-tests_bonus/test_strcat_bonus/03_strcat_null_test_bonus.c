/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strcat_null_test_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:45:38 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 17:49:03 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	strcat_null_test_bonus(int fd)
{
	ft_dprintf(fd, "\n\n03_strcat_null_test_bonus\n\n");
	if (ft_strcat(NULL, "ouaf"))
	{
		ft_dprintf(fd, "03 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "03 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<ouaf\n");
		return (-1);
	}
}
