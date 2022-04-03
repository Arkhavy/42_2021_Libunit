# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 08:08:56 by ljohnson          #+#    #+#              #
#    Updated: 2022/04/03 19:24:11 by ljohnson         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# MAKEFILE TESTS
.PHONY: all clean fclean re
.SILENT:

NAME			:=	tests_bonus
LIBFT			:=	../libft/libft.a
LIBUNIT			:=	../libunit_bonus.a

#//////////////////////////////////////////////////////////////////////////////
#		ALL FILES
#//////////////////////////////////////////////////////////////////////////////

# Files
INCS			:=	tests_bonus.h
LST_TESTS		:=	00_test_launcher_bonus.c	01_ok_test_bonus.c		\
					02_ko_test_bonus.c			03_segv_test_bonus.c	\
					04_bus_test_bonus.c			05_abort_test_bonus.c	\
					06_fpe_test_bonus.c			07_ill_test_bonus.c

# Directories
P_INCS_LIBFT	:=	../libft/lib_includes/
P_INCS_LIBUNIT	:=	../framework_bonus/incs_bonus/
P_TESTS			:=	test_bonus/

# Shortcuts
SRCS			:=	$(addprefix $(P_TESTS),$(LST_TESTS))	tests_main_bonus.c
OBJS			:=	$(SRCS:.c=.o)

#//////////////////////////////////////////////////////////////////////////////
#		COMMAND SHORTCUTS
#//////////////////////////////////////////////////////////////////////////////

CC				:=	gcc
CF				:=	-Wall -Wextra -Werror
CI				:=	-I $(P_INCS_LIBFT) -I $(P_INCS_LIBUNIT) -I .
CS				:=	-g3 -fsanitize=address
CG				:=	-g3
RM				:=	rm -rf

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

all: $(NAME)

# Binary creation
$(NAME): $(LIBFT) $(LIBUNIT) $(OBJS) $(INCS) Makefile
	$(CC) $(CF) $(CI) $(LIBFT) $(LIBUNIT) $(OBJS) -o $@
	printf "$(PURPLE)$(BOLD)Executable $(NAME) created$(RST)\n"

%.o: %.c $(INCS) Makefile
	printf "$(FAINT)$(CC) $(CF) $(CI) -c -o $(RST)$(CYAN)$(BOLD)$@$(RST) $(FAINT)$(BLUE)$<$(RST)\n"
	$(CC) $(CF) $(CI) -c $< -o $@

# Mandatory rules
clean:
	$(RM) $(OBJS)
	printf "$(YELLOW)$(BOLD)All tests bonus object files removed$(RST)\n"

fclean: clean
	$(RM) $(NAME)
	printf "$(RED)$(BOLD)$(NAME) removed $(RST)\n"


re: fclean all