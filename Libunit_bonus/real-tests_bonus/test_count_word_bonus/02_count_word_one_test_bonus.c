/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_count_word_one_test_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:10:12 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:43:51 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	count_word_one_test_bonus(int fd)
{
	int	res;

	res = ft_count_word("one", ' ');
	ft_dprintf(fd, "\n\n02_count_word_one_test_bonus\n\n");
	if (res == 1)
	{
		ft_dprintf(fd, "02 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "02 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<1\n", res);
		return (-1);
	}
}
