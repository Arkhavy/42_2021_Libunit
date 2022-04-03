/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_abort_test_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:19:09 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 19:20:22 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <tests_bonus.h>

int	abort_test_bonus(int fd)
{
	char	str[8];
	char	str2[5];

	ft_dprintf(fd, "\n\n05_abort_test_bonus\n\n");
	str[0] = 'b';
	str[1] = 'o';
	str[2] = 'n';
	str[3] = 'j';
	str[7] = '\0';
	str2[0] = 'o';
	str2[1] = 'u';
	str2[2] = 'a';
	str2[3] = 'f';
	str2[4] = '\0';
	if (ft_strcat(str, str2))
	{
		ft_dprintf(fd, "05 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "05 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<bonjourouaf\n");
		return (-1);
	}
}
