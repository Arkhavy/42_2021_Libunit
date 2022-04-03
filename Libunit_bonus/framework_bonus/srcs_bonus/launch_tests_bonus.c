/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:11:59 by ljohnson          #+#    #+#             */
/*   Updated: 2022/04/03 19:25:52 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libunit_bonus.h>

int	launch_tests_bonus(t_list *testlist, int fd)
{
	t_unit_test	*content;
	t_list		*start;
	int			max_count;
	int			ok_count;

	start = testlist;
	max_count = 0;
	ok_count = 0;
	while (testlist)
	{
		content = testlist->content;
		ok_count += fork_founc(content, fd);
		max_count++;
		testlist = testlist->next;
	}
	ft_dprintf(1, "\e[1;34m%d / %d tests checked.\e[0m\n\n", ok_count, max_count);
	free_my_list(start);
	close(fd);
	if (max_count != ok_count)
		return (-1);
	return (0);
}

int	fork_founc(t_unit_test *content, int fd)
{
	pid_t		pid;
	int			stat;

	stat = 0;
	pid = 0;
	pid = fork();
	if (pid == 0)
		exit(content->my_test(fd));
	pid = wait(&stat);
	if (pid == 0)
		return (0);
	return (print_my_res(content, stat));
}

void	free_my_list(t_list *testlist)
{
	void	*tmp;

	while (testlist)
	{
		free (testlist->content);
		tmp = testlist;
		testlist = testlist->next;
		free (tmp);
	}
}

int	print_my_res(t_unit_test *content, int stat)
{
	if (stat == TEST_OK)
	{
		ft_dprintf(1, "%s\e[1;32m[OK]\e[0m\n", content->name);
		return (1);
	}
	else if (stat == TEST_KO)
		ft_dprintf(1, "%s\e[1;31m[KO]\e[0m\n", content->name);
	else if (stat == TEST_SEGV)
		ft_dprintf(1, "%s\e[2m\e[1;31m[SIGSEGV]\e[0m\n", content->name);
	else if (stat == TEST_BUS)
		ft_dprintf(1, "%s\e[2m\e[1;33m[SIGBUS]\e[0m\n", content->name);
	else if (stat == TEST_ABORT)
		ft_dprintf(1, "%s\e[2m\e[1;35m[SIGABRT]\e[0m\n", content->name);
	else if (stat == TEST_FPE)
		ft_dprintf(1, "%s\e[2m\e[1;36m[SIGFPE]\e[0m\n", content->name);
	else if (stat == TEST_ILL)
		ft_dprintf(1, "%s\e[2m\e[1;37m[SIGILL]\e[0m\n", content->name);
	return (0);
}
// int nani()
// {
// 	return (0);
// }

// int nani2()
// {
// 	return (-1);
// }

// int  main()
// {
// 	t_list	*testlist;

// 	testlist = NULL;
// 	load_test(&testlist, "Basic test", &nani);
// 	load_test(&testlist, "NULL test", &nani2);
// 	launch_tests(testlist);
// 	return (0);
// }

/*
print nom_fonction : nom_test : resultat

1) fork proc fils de la fonction
	besoin d'une autre fonction pour ça
2) wait for result
3) si ok ou ko return 0 else recup nb err avec stat
	les defines dans libunit.h sont faits pour ça
4) print result
	ft_dprintf(int fd, char *format, ...);
	potentiellement dans une autre fonction pour la norme
		ça sera probablement un if/else horrible mdr
5) next node
6) free all nodes
	la boucle de free peut être dans une autre fonction
	
*/
