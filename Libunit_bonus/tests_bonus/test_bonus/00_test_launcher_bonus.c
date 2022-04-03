/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_test_launcher_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:00:27 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 19:26:49 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <tests_bonus.h>

int	test_launcher_bonus(void)
{
	t_list	*testlist;
	int		f;

	testlist = NULL;
	f = open("real_shit.log", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (f == 0)
		f = 0;
	ft_dprintf(f, "~~~~~~~~~~~~~~~~~~~~ TESTS REAL SHIT \
	~~~~~~~~~~~~~~~~~~~~\n\n");
	load_test_bonus(&testlist, "TEST : OK test : ", &ok_test_bonus);
	load_test_bonus(&testlist, "TEST : KO test : ", &ko_test_bonus);
	load_test_bonus(&testlist, "TEST : SEGV test : ", &segv_test_bonus);
	load_test_bonus(&testlist, "TEST : BUS test : ", &bus_test_bonus);
	load_test_bonus(&testlist, "TEST : ABORT test : ", &abort_test_bonus);
	load_test_bonus(&testlist, "TEST : FPE test : ", &fpe_test_bonus);
	load_test_bonus(&testlist, "TEST : ILL test : ", &ill_test_bonus);
	return (launch_tests_bonus(testlist, f));
}
