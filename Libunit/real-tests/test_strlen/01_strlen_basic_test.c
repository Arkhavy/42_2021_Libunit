/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_strlen_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:07:12 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/02 20:42:09 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests.h>

int	strlen_basic_test(void)
{
	if (ft_strlen("ouaf") == 4)
		return (0);
	else
		return (-1);
}
