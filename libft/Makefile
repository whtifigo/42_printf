# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matda-co <matda-co@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 14:24:44 by matda-co          #+#    #+#              #
#    Updated: 2024/10/25 14:35:05 by matda-co         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
			 ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

SRC = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_strlen.c ft_strlcpy.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putnbr_fd.c ft_striteri.c ft_atoi.c ft_tolower.c ft_toupper.c \
	  ft_bzero.c ft_memmove.c ft_memcpy.c ft_memset.c ft_strncmp.c ft_strchr.c \
	  ft_putendl_fd.c ft_substr.c ft_strdup.c ft_strjoin.c ft_calloc.c ft_memchr.c \
	  ft_split.c ft_strlcat.c ft_memcmp.c ft_strrchr.c ft_strnstr.c ft_itoa.c ft_strtrim.c \

BONUS_OBJS = $(BONUS_SRCS:.c=.o)
OBJ = $(SRC:.c=.o)

all: $(NAME)

bonus: $(OBJ) $(BONUS_OBJS)
		ar rcs $(NAME) $(BONUS_OBJS) $(OBJ)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	cc $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
