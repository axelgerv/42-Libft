# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axelgerv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 14:12:19 by axelgerv          #+#    #+#              #
#    Updated: 2019/01/12 12:46:51 by axelgerv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OK_COLOR = \033[32m
NO_COLOR = \033[m

OK = $(OK_COLOR)OK$(NO_COLOR)

NAME = libft.a

INC = includes/

SRC = ft_putchar.c \
	  ft_putstr.c \
	  ft_putnbr.c \
	  ft_putendl.c \
	  ft_putchar_fd.c \
	  ft_putendl_fd.c \
	  ft_putstr_fd.c \
	  ft_putnbr_fd.c \
	  ft_bzero.c \
	  ft_strlen.c \
	  ft_strdup.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_memset.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strstr.c \
	  ft_strnstr.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_atoi.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_memalloc.c \
	  ft_memdel.c \
	  ft_strnew.c \
	  ft_strdel.c \
	  ft_strclr.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_strsub.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_strsplit.c \
	  ft_strlcat.c \
	  ft_itoa.c \
	  ft_lstnew.c \
	  ft_lstdelone.c \
	  ft_lstdel.c \
	  ft_lstadd.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_print_words_tables.c \
	  ft_strrev.c \
	  ft_lstadd_back.c \
	  ft_sqrt.c \
	  ft_swap.c \
	  ft_strctrim.c \
	  ft_strjoinf.c \
	  get_next_line.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

%.o: %.c
	@gcc $(FLAGS) -c -I$(INC) -o $@ -c $? $(FLAGS)

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "[Libft] | Compilation						$(OK)"

clean :
	@rm -f $(OBJ)
	@echo "[Libft] | Clean							$(OK)"

fclean : clean
	@rm -f $(NAME) $(SNAME)
	@echo "[Libft] | Full clean						$(OK)"

re : fclean all
