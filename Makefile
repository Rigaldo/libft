# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cburns <cburns@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 12:51:48 by cburns            #+#    #+#              #
#    Updated: 2019/09/14 21:43:39 by cburns           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc -Wall -Wextra -Werror -I $(HEAD)

NAME = libft.a

HEAD = ./libft.h

SRCS =	./ft_putendl.c		\
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
		./ft_bzero.c		\
		./ft_strchr.c		\
		./ft_strrchr.c		\
		./ft_strstr.c		\
		./ft_strnstr.c		\
		./ft_toupper.c		\
		./ft_tolower.c		\
		./ft_itoa.c			\
		./ft_strclr.c		\
		./ft_strnew.c		\
		./ft_strdel.c		\
		./ft_memdel.c		\
		./ft_memalloc.c		\
		./ft_striter.c		\
		./ft_striteri.c		\
		./ft_strmap.c		\
		./ft_strmapi.c		\
		./ft_strequ.c		\
		./ft_strnequ.c		\
		./ft_strsub.c		\
		./ft_strjoin.c		\
		./ft_strtrim.c		\
		./ft_strsplit.c		\
		./ft_memcpy.c		\
		./ft_memccpy.c		\
		./ft_memmove.c		\
		./ft_memchr.c		\
		./ft_memcmp.c		\
		./ft_lstnew.c		\
		./ft_lstdelone.c	\
		./ft_lstadd.c		\
		./ft_lstdel.c		\
		./ft_lstiter.c		\
		./ft_lstmap.c		\
		./ft_strcountwords.c\
		./ft_lstaddend.c	\
		./ft_lstsize.c		\
		./ft_lstlast.c		\
		./ft_lstat.c		\
		
OBJ = $(SRCS:.c=.o)

all: $(SRCS) $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $^
	@ranlib $(NAME)

%.o: %.c $(HEAD)
	@$(CC) -o $@ -c $<

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re