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
CFLAGS = -Wall -Wextra -Werror -I
RM = rm -f

SRCS = ft_printf.c ft_printf_str.c ft_printf_nbr.c ft_printf_hex.c

