/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:11:59 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:38:07 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libunit_bonus.h>

void	load_test_bonus(t_list **testlist, char *name,
	int (*test_function)(int fd))
{	
	t_unit_test	*content;

	content = ft_calloc(1, sizeof(t_unit_test));
	if (!content)
		return ;
	content->my_test = test_function;
	content->name = name;
	ft_lstadd_back(testlist, ft_lstnew(content));
}
