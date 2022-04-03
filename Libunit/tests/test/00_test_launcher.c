/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_test_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:00:27 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 14:36:30 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <tests.h>

int	test_launcher(void)
{
	t_list	*testlist;

	testlist = NULL;
	load_test(&testlist, "TEST : OK test : ", &ok_test);
	load_test(&testlist, "TEST : KO test : ", &ko_test);
	load_test(&testlist, "TEST : SEGV test : ", &segv_test);
	load_test(&testlist, "TEST : BUS test : ", &bus_test);
	return (launch_tests(testlist));
}
