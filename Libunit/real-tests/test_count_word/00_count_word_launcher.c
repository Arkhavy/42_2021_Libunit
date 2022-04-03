/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_count_word_launcher.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 12:05:21 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 13:53:00 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests.h>

int	count_word_launcher(void)
{
	t_list	*testlist;

	testlist = NULL;
	load_test(&testlist, "COUNT WORD : Basic test : ", &count_word_basic_test);
	load_test(&testlist, "COUNT WORD : One test : ", &count_word_one_test);
	load_test(&testlist, "COUNT WORD : Long test : ", &count_word_long_test);
	load_test(&testlist, "COUNT WORD : NULL test : ", &count_word_null_test);
	return (launch_tests(testlist));
}
