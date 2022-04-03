/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlcpy_bus_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:20:32 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 10:34:02 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests.h>

int	strlcpy_bus_test(void)
{
	if (ft_strlcpy("This is ", "not a good idea", 16) == 16)
		return (0);
	else
		return (-1);
}
