# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/21 01:04:20 by mdupuy            #+#    #+#              #
#    Updated: 2016/11/21 05:17:41 by mdupuy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAG = -Wall -Wextra -Werror

HEADER = libft.h

OPTIN = -c -I

SRC = ft_atoi.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_memcpy.c \
	  ft_memset.c \
	  ft_strchr.c \
	  ft_strcpy.c \
	  ft_strlcat.c \
	  ft_strncat.c \
	  ft_strncpy.c \
	  ft_strrchr.c \
	  ft_tolower.c \
	  ft_bzero.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_strcat.c \
	  ft_strcmp.c \
	  ft_strdup.c \
	  ft_strlen.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_strstr.c \
	  ft_toupper.c \
	  ft_memchr.c \
	  ft_memcmp.c


all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(HEADER) $(SRC)
	ar rc $(NAME) ??????
	ranlib $(NAME)

clean:
	/bin/rm -f ??????

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
