/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlcpy_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:15:07 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 13:59:08 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests.h>

int	strlcpy_launcher(void)
{
	t_list	*testlist;

	testlist = NULL;
	load_test(&testlist, "STRLCPY : Bus test : ", &strlcpy_bus_test);
	load_test(&testlist, "STRLCPY : NULL test : ", &strlcpy_null_test);
	return (launch_tests(testlist));
}
