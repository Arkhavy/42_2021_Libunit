/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ischarset_launcher.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:17:21 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 13:59:39 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests.h>

int	ischarset_launcher(void)
{
	t_list	*testlist;

	testlist = NULL;
	load_test(&testlist, "ISCHARSET : Basic test : ", &ischarset_basic_test);
	load_test(&testlist, "ISCHARSET : Wrong test : ", &ischarset_wrong_test);
	load_test(&testlist, "ISCHARSET : NULL test : ", &ischarset_null_test);
	return (launch_tests(testlist));
}
