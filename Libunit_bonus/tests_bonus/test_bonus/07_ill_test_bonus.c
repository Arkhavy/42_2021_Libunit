/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_ill_test_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:33:07 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/06 14:29:47 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <tests_bonus.h>

int	ill_test_bonus(int fd)
{
	ft_dprintf(fd, "\n\n07_ill_test_bonus\n\n");
	ft_dprintf(fd, "07 : [KO]\n");
	ft_dprintf(fd, ">>[1]    76545 illegal hardware instruction  \
	./a.out\n<<IDFK, IM TIRED\n");
	asm (".byte 0x0f, 0x0b");
	if (1)
		return (0);
	else
		return (-1);
}
