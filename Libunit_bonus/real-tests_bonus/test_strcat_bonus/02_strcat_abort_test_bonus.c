/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strcat_abort_test_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:45:08 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:45:10 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	strcat_abort_test_bonus(int fd)
{
	char	str[5];
	char	str2[5];

	ft_dprintf(fd, "\n\n02_strcat_abort_test_bonus\n\n");
	str[0] = 'b';
	str[1] = 'o';
	str[2] = 'n';
	str[3] = 'j';
	str[4] = '\0';
	str2[0] = 'o';
	str2[1] = 'u';
	str2[2] = 'a';
	str2[3] = 'f';
	str2[4] = '\0';
	if (ft_strcat(str, str2))
	{
		ft_dprintf(fd, "02 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "01 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<bonjourouaf\n");
		return (-1);
	}
}
