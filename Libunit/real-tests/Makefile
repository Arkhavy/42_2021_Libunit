# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 11:43:21 by ljohnson          #+#    #+#              #
#    Updated: 2022/04/03 13:58:49 by ljohnson         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# MAKEFILE REAL_TESTS
.PHONY: all clean fclean re
.SILENT:

NAME				:=	real-tests_binary
LIBFT				:=	../libft/libft.a
LIBUNIT				:=	../libunit.a

#//////////////////////////////////////////////////////////////////////////////
#		ALL FILES
#//////////////////////////////////////////////////////////////////////////////

# Files
INCS				:=	real_tests.h

LST_TEST_STRLEN		:=	00_strlen_launcher.c			01_strlen_basic_test.c		\
						02_strlen_null_test.c

LST_TEST_ATOI		:=	00_atoi_launcher.c				01_atoi_basic_test.c		\
						02_atoi_negative_test.c			03_atoi_intmax_test.c		\
						04_atoi_intmin_test.c			05_atoi_null_test.c

LST_TEST_STRLCPY	:=	00_strlcpy_launcher.c			01_strlcpy_bus_test.c		\
						02_strlcpy_null_test.c

LST_TEST_COUNT_WORD	:=	00_count_word_launcher.c		01_count_word_basic_test.c	\
						02_count_word_one_test.c		03_count_word_long_test.c	\
						04_count_word_null_test.c

LST_TEST_ISCHARSET	:=	00_ischarset_launcher.c			01_ischarset_basic_test.c	\
						02_ischarset_wrong_test.c		03_ischarset_null_test.c

# Directories
P_INCS_LIBFT		:=	../libft/lib_includes/
P_INCS_LIBUNIT		:=	../framework/incs/
P_TEST_STRLEN		:=	test_strlen/
P_TEST_ATOI			:=	test_atoi/
P_TEST_STRLCPY		:=	test_strlcpy/
P_TEST_COUNT_WORD	:=	test_count_word/
P_TEST_ISCHARSET	:=	test_ischarset/

# Shortcuts
SRCS				:=	$(addprefix $(P_TEST_STRLEN),$(LST_TEST_STRLEN))			\
						$(addprefix $(P_TEST_ATOI), $(LST_TEST_ATOI))				\
						$(addprefix $(P_TEST_STRLCPY), $(LST_TEST_STRLCPY))			\
						$(addprefix $(P_TEST_COUNT_WORD),$(LST_TEST_COUNT_WORD))	\
						$(addprefix $(P_TEST_ISCHARSET),$(LST_TEST_ISCHARSET))		\
						real_tests_main.c
OBJS				:=	$(SRCS:.c=.o)

#//////////////////////////////////////////////////////////////////////////////
#		COMMAND SHORTCUTS
#//////////////////////////////////////////////////////////////////////////////

CC					:=	gcc
CF					:=	-Wall -Wextra -Werror
CI					:=	-I $(P_INCS_LIBFT) -I $(P_INCS_LIBUNIT) -I .
CS					:=	-g3 -fsanitize=address
CG					:=	-g3
RM					:=	rm -rf

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
	printf "$(YELLOW)$(BOLD)All real tests object files removed$(RST)\n"

fclean: clean
	$(RM) $(NAME)
	printf "$(RED)$(BOLD)$(NAME) removed $(RST)\n"

re: fclean all