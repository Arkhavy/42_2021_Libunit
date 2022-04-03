/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_count_word_long_test_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:10:57 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:43:58 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	count_word_long_test_bonus(int fd)
{
	int	res;

	res = ft_count_word("a a a a a a a a a a a a a a a a a a a a a ", ' ');
	ft_dprintf(fd, "\n\n03_count_word_long_test_bonus\n\n");
	if (res == 21)
	{
		ft_dprintf(fd, "03 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "03 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<21\n", res);
		return (-1);
	}
}
