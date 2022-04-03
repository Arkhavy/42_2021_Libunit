/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:07:19 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 13:59:24 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*appelle toute les fonctions qui vont test strlen*/

#include <real_tests.h>

int	strlen_launcher(void)
{
	t_list	*testlist;

	testlist = NULL;
	load_test(&testlist, "STRLEN : Basic test : ", &strlen_basic_test);
	load_test(&testlist, "STRLEN : NULL test : ", &strlen_null_test);
	return (launch_tests(testlist));
}
