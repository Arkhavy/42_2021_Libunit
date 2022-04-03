/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_count_word_null_test_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:12:44 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:44:07 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	count_word_null_test_bonus(int fd)
{
	int	res;

	res = ft_count_word(NULL, ' ');
	ft_dprintf(fd, "\n\n04_count_word_null_test_bonus\n\n");
	if (res == 42)
	{
		ft_dprintf(fd, "04 : [OK]\n");
		return (0);
	}
	else
	{
		ft_dprintf(fd, "04 : [KO]\n");
		ft_dprintf(fd, ">>%d\n<<42\n", res);
		return (-1);
	}
}
