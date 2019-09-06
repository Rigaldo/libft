# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cburns <cburns@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 12:51:48 by cburns            #+#    #+#              #
#    Updated: 2019/09/06 07:58:48 by cburns           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=	./ft_putendl.c		\
		./ft_putstr.c		\
		./ft_strlen.c		\
		./ft_putendl_fd.c	\
		./ft_putstr_fd.c	\
		./ft_strncpy.c		\
		./ft_putchar.c		\
		./ft_putnbr.c		\
		./ft_strcpy.c		\
		./ft_putchar_fd.c	\
		./ft_putnbr_fd.c	\
		./ft_strdup.c		\
		./ft_memset.c		\
		./ft_strcmp.c		\
		./ft_strncmp.c		\
		./ft_isalpha.c		\
		./ft_isdigit.c		\
		./ft_isalnum.c		\
		./ft_isascii.c		\
		./ft_isprint.c		\
		./ft_strcat.c		\
		./ft_strncat.c		\
		./ft_strlcat.c		\
		./ft_atoi.c			\
		
OBJ=$(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(SRCS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
