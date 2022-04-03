# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 08:08:56 by ljohnson          #+#    #+#              #
#    Updated: 2022/04/03 15:24:04 by ljohnson         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# MAKEFILE TESTS
.PHONY: all clean fclean re
.SILENT:

NAME			:=	tests_binary
LIBFT			:=	../libft/libft.a
LIBUNIT			:=	../libunit.a

#//////////////////////////////////////////////////////////////////////////////
#		ALL FILES
#//////////////////////////////////////////////////////////////////////////////

# Files
INCS			:=	tests.h
LST_TESTS		:=	00_test_launcher.c	01_ok_test.c	02_ko_test.c	\
					03_segv_test.c		04_bus_test.c

# Directories
P_INCS_LIBFT	:=	../libft/lib_includes/
P_INCS_LIBUNIT	:=	../framework/incs/
P_TESTS			:=	test/

# Shortcuts
SRCS			:=	$(addprefix $(P_TESTS),$(LST_TESTS))	tests_main.c
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
	printf "$(YELLOW)$(BOLD)All tests object files removed$(RST)\n"

fclean: clean
	$(RM) $(NAME)
	printf "$(RED)$(BOLD)$(NAME) removed $(RST)\n"


re: fclean all