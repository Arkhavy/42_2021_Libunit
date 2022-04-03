/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:33:23 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 13:58:04 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_TESTS_H
# define REAL_TESTS_H

# include <libunit.h>

/*-------------------- test_strlen --------------------*/

int	strlen_launcher(void);
int	strlen_basic_test(void);
int	strlen_null_test(void);

/*-------------------- test_atoi --------------------*/

int	atoi_launcher(void);
int	atoi_basic_test(void);
int	atoi_negative_test(void);
int	atoi_intmax_test(void);
int	atoi_intmin_test(void);
int	atoi_null_test(void);

/*-------------------- test_strlcpy --------------------*/

int	strlcpy_launcher(void);
int	strlcpy_bus_test(void);
int	strlcpy_null_test(void);

/*-------------------- test_count_word --------------------*/

int	count_word_launcher(void);
int	count_word_basic_test(void);
int	count_word_one_test(void);
int	count_word_long_test(void);
int	count_word_null_test(void);

/*-------------------- test_ischarset --------------------*/

int	ischarset_launcher(void);
int	ischarset_basic_test(void);
int	ischarset_wrong_test(void);
int	ischarset_null_test(void);

#endif //REAL_TESTS_H