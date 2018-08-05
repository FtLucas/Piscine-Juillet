# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luwargni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 00:25:20 by luwargni          #+#    #+#              #
#    Updated: 2018/07/25 16:51:00 by luwargni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

SRCS = ./srcs/ft_putchar.c \
	   ./srcs/ft_putstr.c \
	   ./srcs/ft_strcmp.c \
	   ./srcs/ft_strlen.c \
	   ./srcs/ft_swap.c

HEADER = include

OBJ = ./ft_putchar.o \
	  ./ft_putstr.o \
	  ./ft_strcmp.o \
	  ./ft_strlen.o \
	  ./ft_swap.o

CFLAGS += -Werror -Wextra -Wall

all:     $(NAME)
$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -c -I$(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re
