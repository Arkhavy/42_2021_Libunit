/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:07:19 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 19:21:00 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	strlen_launcher_bonus(void)
{
	t_list	*testlist;
	int		f;

	testlist = NULL;
	f = open("strlen.log", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (f == 0)
		f = 0;
	ft_dprintf(f, "~~~~~~~~~~~~~~~~~~~~ TESTS strlen ~~~~~~~~~~~~~~~~~~~~\n\n");
	load_test_bonus(&testlist, "STRLEN : Basic test : ",
		&strlen_basic_test_bonus);
	load_test_bonus(&testlist, "STRLEN : NULL test : ",
		&strlen_null_test_bonus);
	return (launch_tests_bonus(testlist, f));
}
