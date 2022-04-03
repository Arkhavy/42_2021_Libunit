/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlcpy_null_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:23:41 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 10:25:06 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <real_tests.h>

int	strlcpy_null_test(void)
{
	if (ft_strlcpy(NULL, "Writing on NULL should be a segv", 33) == 33)
		return (0);
	else
		return (-1);
}
