# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/12 05:50:23 by mdupuy            #+#    #+#              #
#    Updated: 2016/12/14 04:58:28 by mdupuy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_atoi.c			\
		ft_bzero.c			\
		ft_digicount.c		\
		ft_isalnum.c 		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_isprint.c		\
		ft_itoa.c			\
		ft_lstadd.c			\
		ft_lstdel.c			\
		ft_lstdelone.c		\
		ft_lstiter.c		\
		ft_lstmap.c			\
		ft_lstnew.c			\
		ft_memalloc.c		\
		ft_memccpy.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_memcpy.c			\
		ft_memdel.c			\
		ft_memmove.c		\
		ft_memset.c			\
		ft_putchar_fd.c		\
		ft_putchar.c		\
		ft_putendl_fd.c		\
		ft_putendl.c		\
		ft_putnbr_fd.c		\
		ft_putnbr.c			\
		ft_putstr_fd.c		\
		ft_putstr.c			\
		ft_strcat.c			\
		ft_strchr.c			\
		ft_strclr.c			\
		ft_strcmp.c			\
		ft_strcpy.c			\
		ft_strdel.c			\
		ft_strdup.c			\
		ft_strequ.c			\
		ft_striter.c		\
		ft_striteri.c		\
		ft_strjoin.c		\
		ft_strlcat.c		\
		ft_strlen.c			\
		ft_strmap.c			\
		ft_strmapi.c		\
		ft_strncat.c		\
		ft_strncmp.c		\
		ft_strncpy.c		\
		ft_strnequ.c		\
		ft_strnew.c			\
		ft_strnstr.c		\
		ft_strsplit.c		\
		ft_strrchr.c		\
		ft_strstr.c			\
		ft_strsub.c			\
		ft_strtrim.c		\
		ft_tolower.c		\
		ft_toupper.c		\
		ft_strndup.c		\
		ft_isspace.c		\
		ft_countn.c			\
		ft_strlcpy.c


OBJT = $(SRCS:.c=.o)
	
CC = @gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJT)
	@ar rc $(NAME) $(OBJT)
	@echo "\0033[1;34mLibft\t\t\0033[1;30m[DONE]\0033[1;37m"
	@ranlib $(NAME)
	@echo "\0033[1;34mRanlib\t\t\0033[1;30m[DONE]\0033[1;37m"

clean:
	@rm -f $(OBJT)
	@echo "\0033[1;34mObjects\t\t\0033[0;31m[DELETED]\0033[1;37m"

fclean: clean
	@rm -f $(NAME)
	@echo "\0033[1;34m$(NAME)\t\t\0033[0;31m[DELETED]\0033[1;37m"

re: fclean all

.PHONY: all clean fclean re norme
