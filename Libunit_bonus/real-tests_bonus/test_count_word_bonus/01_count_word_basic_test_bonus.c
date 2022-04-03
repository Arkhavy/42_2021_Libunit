/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_count_word_basic_test_bonus.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:09:23 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:43:43 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	count_word_basic_test_bonus(int fd)
{
	int	res;

	res = ft_count_word("This is a test", ' ');
	ft_dprintf(fd, "\n\n01_count_word_basic_test_bonus\n\n");
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
