/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proj.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:59:02 by ljohnson          #+#    #+#             */
/*   Updated: 2022/03/04 13:48:43 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROJ_H
# define FT_PROJ_H

# include "libft.h"

/*/////////////////////////////////////////////////////////////////////////////
		PROJECTS FUNCTIONS
*//////////////////////////////////////////////////////////////////////////////

//char	*gnl_build_stock(char *stock, char *buffer, ssize_t index);
//char	*gnl_build_line(char *stock, char *line, ssize_t index);
//char	*gnl_reader(char **stock, char *line, int fd, ssize_t *index);
char	*get_next_line(int fd);
//int	ft_print_parse(va_list ap, char fc);
int		ft_printf(const char *format, ...);

char	*ft_gnl_join(int fd);
//int	ft_check_limiter(char *prompt, char *limiter);
int		ft_heredoc(char *limiter);
//int	ft_print_parse_fd(va_list ap, char fc, int fd);
int		ft_dprintf(int fd, const char *format, ...);

#endif //FT_PROJ_H