/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:27:19 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/31 18:04:33 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	a;

	a = 0;
	while (lst)
	{
		lst = lst->next;
		a++;
	}
	return (a);
}
