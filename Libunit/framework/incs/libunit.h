/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:19:53 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 14:41:31 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

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

# define TEST_OK 0
# define TEST_KO 65280
# define TEST_SEGV 11
# define TEST_BUS 10

# define BLACK "\e[1;30m"
# define RED "\e[1;31m"
# define GREEN "\e[1;32m"
# define YELLOW "\e[1;33m"
# define BLUE "\e[1;34m"
# define PURPLE "\e[1;35m"
# define CYAN "\e[1;36m"
# define WHITE "\e[1;37m"
# define RESET "\e[0m"

typedef struct s_unit_test	t_unit_test;

struct	s_unit_test
{
	int			(*my_test)(void);
	char		*name;
};

/*-------------------- load_test --------------------*/

void	load_test(t_list **testlist, char *name, int (*test_function)(void));

/*-------------------- launch_test --------------------*/

int		launch_tests(t_list *testlist);
int		fork_founc(t_unit_test *content);
void	free_my_list(t_list *testlist);
int		print_my_res(t_unit_test *content, int stat);

#endif //LIBUNIT_H