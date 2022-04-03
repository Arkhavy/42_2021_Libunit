/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:32:55 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:34:01 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_BONUS_H
# define TESTS_BONUS_H

# include <libunit_bonus.h>

int	test_launcher_bonus(void);
int	ok_test_bonus(int fd);
int	ko_test_bonus(int fd);
int	segv_test_bonus(int fd);
int	bus_test_bonus(int fd);
int	abort_test_bonus(int fd);
int	fpe_test_bonus(int fd);
int	ill_test_bonus(int fd);

#endif //TESTS_BONUS_H