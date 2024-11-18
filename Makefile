# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matda-co <matda-co@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 15:44:12 by matda-co          #+#    #+#              #
#    Updated: 2024/11/11 15:44:19 by matda-co         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = ft_printf.c ft_printf_str.c ft_printf_nbr.c ft_printf_hex.c ft_printf_ptr.c ft_printf_unbr.c \
	  libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putnbr_fd.c libft/ft_itoa.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
