# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 09:48:47 by ljohnson          #+#    #+#              #
#    Updated: 2022/04/03 15:25:21 by ljohnson         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# MAKEFILE MASTER
.PHONY: all clean fclean re test real-tests
.SILENT:

NAME		:=	libunit.a
LIBFT		:=	libft/libft.a
TESTS		:=	tests/tests_binary
REAL_TESTS	:=	real-tests/real-tests_binary

#//////////////////////////////////////////////////////////////////////////////
#		ALL FILES
#//////////////////////////////////////////////////////////////////////////////

# Files
FRAMEWORK_INCS	:=	libunit.h
FRAMEWORK_LST	:=	launch_test.c	load_test.c

# Directories
P_INCS_LIBFT	:=	libft/lib_includes/
P_FRAMEWORK		:=	framework/
P_TESTS			:=	tests/
P_REAL_TESTS	:=	real_tests/
P_INCS			:=	incs/
P_SRCS			:=	srcs/

# Shortcuts
INCS			:=	$(addprefix $(P_FRAMEWORK)$(P_INCS),$(FRAMEWORK_INCS))
SRCS			:=	$(addprefix $(P_FRAMEWORK)$(P_SRCS),$(FRAMEWORK_LST))
OBJS			:=	$(SRCS:.c=.o)

#//////////////////////////////////////////////////////////////////////////////
#		COMMAND SHORTCUTS
#//////////////////////////////////////////////////////////////////////////////

CC			:=	gcc
CF			:=	-Wall -Werror -Wextra
CI			:=	-I $(P_FRAMEWORK)$(P_INCS) -I $(P_INCS_LIBFT)
CS			:=	-g -fsanitize=address
CG			:=	-g3
AR			:=	ar rcs
RM			:=	rm -rf

#//////////////////////////////////////////////////////////////////////////////
#		COLORS
#//////////////////////////////////////////////////////////////////////////////

# colors
BLACK=\033[30m
RED=\033[31m
GREEN=\033[32m
YELLOW=\033[33m
BLUE=\033[34m
PURPLE=\033[35m
CYAN=\033[36m
WHITE=\033[37m

# text
ERASE=\033[2K\r
RST=\033[0m
BOLD=\033[1m
FAINT=\033[2m
ITALIC=\033[3m
UNDERLINE=\033[4m

#//////////////////////////////////////////////////////////////////////////////
#		RULES
#//////////////////////////////////////////////////////////////////////////////

all: makelibft $(NAME)

# Library creation
$(NAME): $(OBJS) Makefile
	$(AR) $(NAME) $(OBJS)
	printf "$(PURPLE)$(BOLD)Library $(NAME) created$(RST)\n"

$(P_FRAMEWORK)%.o: $(P_FRAMEWORK)%.c $(INCS) $(LIBFT) Makefile
	printf "$(FAINT)$(CC) $(CF) $(CI) -c -o $(RST)$(CYAN)$(BOLD)$@$(RST) $(FAINT)$(BLUE)$<$(RST)\n"
	$(CC) $(CF) $(CI) -c $< -o $@

$(LIBFT): makelibft

$(TESTS): test

$(REAL_TESTS): real-tests

# Makefile calls
makelibft:
	$(MAKE) -j 3 -C libft/

test: makelibft $(NAME)
	$(MAKE) -C tests/
	./$(TESTS)

real-tests: makelibft $(NAME)
	$(MAKE) -C real-tests/
	./$(REAL_TESTS)

# Mandatory rules
clean:
	$(RM) $(OBJS)
	printf "$(YELLOW)$(BOLD)All Libunit object files removed$(RST)\n"
	$(MAKE) clean -C libft/
	$(MAKE) clean -C tests/
	$(MAKE) clean -C real-tests/
	
fclean: clean
	$(RM) $(NAME)
	printf "$(RED)$(BOLD)Library $(NAME) removed $(RST)\n"
	$(MAKE) fclean -C libft/
	$(MAKE) fclean -C tests/
	$(MAKE) fclean -C real-tests/

re: fclean all