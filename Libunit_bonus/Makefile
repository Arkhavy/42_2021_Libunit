# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 09:48:47 by ljohnson          #+#    #+#              #
#    Updated: 2022/04/03 19:24:18 by ljohnson         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# MAKEFILE MASTER
.PHONY: all clean fclean re test real-tests
.SILENT:

NAME		:=	libunit_bonus.a
LIBFT		:=	libft/libft.a
TESTS		:=	tests_bonus/tests_bonus
REAL_TESTS	:=	real-tests_bonus/real-tests_bonus

#//////////////////////////////////////////////////////////////////////////////
#		ALL FILES
#//////////////////////////////////////////////////////////////////////////////

# Files
FRAMEWORK_INCS	:=	libunit_bonus.h
FRAMEWORK_LST	:=	launch_tests_bonus.c	load_test_bonus.c
LST_LOG			:=	strlen.log			atoi.log				\
					strlcpy.log			count_word.log			\
					ischarset.log		strcat.log				\
					real_shit.log

# Directories
P_INCS_LIBFT	:=	libft/lib_includes/
P_LIBFT			:=	libft/
P_FRAMEWORK		:=	framework_bonus/
P_TESTS			:=	tests_bonus/
P_REAL_TESTS	:=	real-tests_bonus/
P_INCS			:=	incs_bonus/
P_SRCS			:=	srcs_bonus/

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
	$(MAKE) -j 3 -C $(P_LIBFT)

test: makelibft $(NAME)
	$(MAKE) -C $(P_TESTS)
	./$(TESTS)

real-tests: makelibft $(NAME)
	$(MAKE) -C $(P_REAL_TESTS)
	./$(REAL_TESTS)

# Mandatory rules
clean:
	$(RM) $(OBJS)
	printf "$(YELLOW)$(BOLD)All Libunit object files removed$(RST)\n"
	$(MAKE) clean -C $(P_LIBFT)
	$(MAKE) clean -C $(P_TESTS)
	$(MAKE) clean -C $(P_REAL_TESTS)
	
fclean: clean
	$(RM) $(NAME)
	$(RM) $(LST_LOG)
	printf "$(YELLOW)$(BOLD)Function logs removed $(RST)\n"
	printf "$(RED)$(BOLD)Library $(NAME) removed $(RST)\n"
	$(MAKE) fclean -C $(P_LIBFT)
	$(MAKE) fclean -C $(P_TESTS)
	$(MAKE) fclean -C $(P_REAL_TESTS)

re: fclean all