# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cperrard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 16:15:53 by cperrard          #+#    #+#              #
#    Updated: 2017/11/08 11:22:51 by cperrard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/*.c

SRCO = *.o

HEADERS = ./includes/

all : $(NAME)

$(NAME):
	@gcc -c $(SRC)
	@ar rc $(NAME) $(SRCO)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
