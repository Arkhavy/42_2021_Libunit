/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:19:53 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 18:57:02 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_BONUS_H
# define LIBUNIT_BONUS_H

/**
 * include <stdlib.h>
 * include <unistd.h>
 * include <limits.h>
 * include <fcntl.h>
 * include <stdarg.h>
 * include <stddef.h>
 * include <sys/wait.h>
 * include <stdio.h>
 * include <math.h>
 * include <sys/time.h>
 * include <pthread.h>
*/
# include <libft.h>

/*-------------------- defines --------------------*/

# define TEST_OK	0
# define TEST_KO	65280
# define TEST_SEGV	11
# define TEST_BUS	10
# define TEST_ABORT	6
# define TEST_FPE	8
# define TEST_ILL	4
# define TEST_PIPE

# define BLACK	 "\e[1;30m"
# define RED	 "\e[1;31m"
# define GREEN	 "\e[1;32m"
# define YELLOW	 "\e[1;33m"
# define BLUE	 "\e[1;34m"
# define PURPLE	 "\e[1;35m"
# define CYAN	 "\e[1;36m"
# define WHITE	 "\e[1;37m"
# define RESET	 "\e[0m"

/*-------------------- typedef & struct --------------------*/

typedef struct s_unit_test	t_unit_test;

struct	s_unit_test
{
	int			(*my_test)(int fd);
	char		*name;
};

/*-------------------- load_test_bonus.c --------------------*/

void	load_test_bonus(t_list **testlist, char *name,
			int (*test_function)(int fd));

/*-------------------- launch_test_bonus.c --------------------*/

int		launch_tests_bonus(t_list *testlist, int fd);
int		fork_founc(t_unit_test *content, int fd);
void	free_my_list(t_list *testlist);
int		print_my_res(t_unit_test *content, int stat);

#endif //LIBUNIT_BONUS_H