/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:21:00 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:42:26 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	atoi_launcher_bonus(void)
{
	t_list	*testlist;
	int		f;

	testlist = NULL;
	f = open("atoi.log", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (f == 0)
		f = 0;
	ft_dprintf(f, "~~~~~~~~~~~~~~~~~~~~ TESTS ATOI \
	~~~~~~~~~~~~~~~~~~~~\n\n");
	load_test_bonus(&testlist, "ATOI : Basic test : ", &atoi_basic_test_bonus);
	load_test_bonus(&testlist, "ATOI : Negative test : ",
		&atoi_negative_test_bonus);
	load_test_bonus(&testlist, "ATOI : Int max test : ",
		&atoi_intmax_test_bonus);
	load_test_bonus(&testlist, "ATOI : Int min test : ",
		&atoi_intmin_test_bonus);
	load_test_bonus(&testlist, "ATOI : NULL test : ", &atoi_null_test_bonus);
	return (launch_tests_bonus(testlist, f));
}
