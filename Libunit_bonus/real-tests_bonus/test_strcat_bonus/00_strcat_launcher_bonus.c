/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcat_launcher_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 16:41:48 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:44:48 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	strcat_launcher_bonus(void)
{
	t_list	*testlist;
	int		f;

	testlist = NULL;
	f = open("strcat.log", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (f == 0)
		f = 0;
	ft_dprintf(f, "~~~~~~~~~~~~~~~~~~~~ TESTS strcat \
	~~~~~~~~~~~~~~~~~~~~\n\n");
	load_test_bonus(&testlist, "STRCAT : Bus test : ",
		&strcat_bus_test_bonus);
	load_test_bonus(&testlist, "STRCAT : Abort test : ",
		&strcat_abort_test_bonus);
	load_test_bonus(&testlist, "STRCAT : NULL test : ",
		&strcat_null_test_bonus);
	return (launch_tests_bonus(testlist, f));
}
