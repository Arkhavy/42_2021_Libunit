/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_count_word_launcher_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:05:21 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 19:21:34 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests_bonus.h>

int	count_word_launcher_bonus(void)
{
	t_list	*testlist;
	int		f;

	testlist = NULL;
	f = open("count_word.log", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (f == 0)
		f = 0;
	ft_dprintf(f, "~~~~~~~~~~~~~~~~~~~~ TESTS count_word \
	~~~~~~~~~~~~~~~~~~~~\n");
	load_test_bonus(&testlist, "COUNT WORD : Basic test : ",
		&count_word_basic_test_bonus);
	load_test_bonus(&testlist, "COUNT WORD : One test : ",
		&count_word_one_test_bonus);
	load_test_bonus(&testlist, "COUNT WORD : Long test : ",
		&count_word_long_test_bonus);
	load_test_bonus(&testlist, "COUNT WORD : NULL test : ",
		&count_word_null_test_bonus);
	return (launch_tests_bonus(testlist, f));
}
