# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 11:44:19 by aoutifra          #+#    #+#              #
#    Updated: 2022/11/21 17:31:25 by aoutifra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_x.c ft_putnbru.c ft_printf.c ft_putchar.c ft_putnbr.c  ft_putstr.c \

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

HEADER = ft_printf.h

all :	$(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o :%.c $(HEADER)
	$(CC) $(FLAGS) -c $<

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re