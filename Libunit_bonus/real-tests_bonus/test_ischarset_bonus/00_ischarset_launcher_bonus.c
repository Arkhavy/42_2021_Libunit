/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ischarset_launcher_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:17:21 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 19:11:47 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	ischarset_launcher_bonus(void)
{
	t_list	*testlist;
	int		f;

	testlist = NULL;
	f = open("ischarset.log", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (f == 0)
		f = 0;
	ft_dprintf(f, "~~~~~~~~~~~~~~~~~~~~ TESTS ischarset \
	~~~~~~~~~~~~~~~~~~~~\n");
	load_test_bonus(&testlist, "ISCHARSET : Basic test : ",
		&ischarset_basic_test_bonus);
	load_test_bonus(&testlist, "ISCHARSET : Wrong test : ",
		&ischarset_wrong_test_bonus);
	load_test_bonus(&testlist, "ISCHARSET : NULL test : ",
		&ischarset_null_test_bonus);
	return (launch_tests_bonus(testlist, f));
}
