# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpartane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/19 13:27:38 by jpartane          #+#    #+#              #
#    Updated: 2019/10/19 13:55:58 by jpartane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLGS = -Wall -Wextra -Werror

SRC = srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_putstr.c \
	  srcs/ft_strlen.c srcs/ft_swap.c

INC = ./includes

OBJ = ft_putchar.o ft_strcmp.o ft_putstr.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME): 
	gcc $(FLGS) -c $(SRC) -I $(INC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
