/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlcpy_launcher_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:15:07 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 19:21:23 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	strlcpy_launcher_bonus(void)
{
	t_list	*testlist;
	int		f;

	testlist = NULL;
	f = open("strlcpy.log", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (f == 0)
		f = 0;
	ft_dprintf(f, "~~~~~~~~~~~~~~~~~~~~ TESTS strlcpy \
	~~~~~~~~~~~~~~~~~~~~\n\n");
	load_test_bonus(&testlist, "STRLCPY : Bus test : ",
		&strlcpy_bus_test_bonus);
	load_test_bonus(&testlist, "STRLCPY : NULL test : ",
		&strlcpy_null_test_bonus);
	return (launch_tests_bonus(testlist, f));
}
