/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:21:00 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 14:44:27 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests.h>

int	atoi_launcher(void)
{
	t_list	*testlist;

	testlist = NULL;
	load_test(&testlist, "ATOI : Basic test : ", &atoi_basic_test);
	load_test(&testlist, "ATOI : Negative test : ", &atoi_negative_test);
	load_test(&testlist, "ATOI : Int max test : ", &atoi_intmax_test);
	load_test(&testlist, "ATOI : Int min test : ", &atoi_intmin_test);
	load_test(&testlist, "ATOI : NULL test : ", &atoi_null_test);
	return (launch_tests(testlist));
}
