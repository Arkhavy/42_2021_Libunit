/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:32:55 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 08:07:21 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <libunit.h>

int	test_launcher(void);
int	ok_test(void);
int	ko_test(void);
int	segv_test(void);
int	bus_test(void);

#endif //TESTS_H