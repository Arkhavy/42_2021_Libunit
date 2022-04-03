/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_tests_bonus.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:33:23 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 17:34:19 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_TESTS_BONUS_H
# define REAL_TESTS_BONUS_H

# include <libunit_bonus.h>

/*-------------------- test_strlen_bonus --------------------*/

int	strlen_launcher_bonus(void);
int	strlen_basic_test_bonus(int fd);
int	strlen_null_test_bonus(int fd);

/*-------------------- test_atoi_bonus --------------------*/

int	atoi_launcher_bonus(void);
int	atoi_basic_test_bonus(int fd);
int	atoi_negative_test_bonus(int fd);
int	atoi_intmax_test_bonus(int fd);
int	atoi_intmin_test_bonus(int fd);
int	atoi_null_test_bonus(int fd);

/*-------------------- test_strlcpy_bonus --------------------*/

int	strlcpy_launcher_bonus(void);
int	strlcpy_bus_test_bonus(int fd);
int	strlcpy_null_test_bonus(int fd);

/*-------------------- test_count_word_bonus --------------------*/

int	count_word_launcher_bonus(void);
int	count_word_basic_test_bonus(int fd);
int	count_word_one_test_bonus(int fd);
int	count_word_long_test_bonus(int fd);
int	count_word_null_test_bonus(int fd);

/*-------------------- test_ischarset_bonus --------------------*/

int	ischarset_launcher_bonus(void);
int	ischarset_basic_test_bonus(int fd);
int	ischarset_wrong_test_bonus(int fd);
int	ischarset_null_test_bonus(int fd);

/*-------------------- test_strcat_bonus --------------------*/

int	strcat_launcher_bonus(void);
int	strcat_bus_test_bonus(int fd);
int	strcat_abort_test_bonus(int fd);
int	strcat_null_test_bonus(int fd);

#endif //REAL_TESTS_BONUS_H