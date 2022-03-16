# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 15:56:46 by jeongkpa          #+#    #+#              #
#    Updated: 2022/03/16 19:57:39 by jeongkpa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SR = ./srcs/
HEADER = ./includes/
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c\
ft_strlcat.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c
SRCS = $(addprefix $(SR), $(SRC))
OBJ = $(SRCS:.c=.o)
NAME = libft.a
AR = ar rc
GCC = gcc
OPTION = -Wall -Wextra -Werror
RM = rm -f

all : $(NAME)

so:
	$(GCC) -fPIC $(OPTION) $(SRCS)
	gcc -shared -o libft.so $(OBJ)

.c.o :
	$(GCC) $(OPTION) -c -I $(HEADER) $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

