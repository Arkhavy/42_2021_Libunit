/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:11:59 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 13:49:41 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libunit.h>

void	load_test(t_list **testlist, char *name, int (*test_function)(void))
{	
	t_unit_test	*content;

	content = ft_calloc(1, sizeof(t_unit_test));
	if (!content)
		return ;
	content->my_test = test_function;
	content->name = name;
	ft_lstadd_back(testlist, ft_lstnew(content));
}
