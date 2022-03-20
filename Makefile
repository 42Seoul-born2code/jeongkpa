# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeongkpa <jeongkpa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 15:56:46 by jeongkpa          #+#    #+#              #
#    Updated: 2022/03/20 17:08:43 by jeongkpa         ###   ########.fr        #
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

BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
ft_lstclear.c  ft_lstdelone.c ft_lstiter.c ft_lstmap.c

SRCS = $(addprefix $(SR), $(SRC))
OBJ = $(SRCS:.c=.o)

BSRCS = $(addprefix $(SR), $(BSRC))
BOBJS = $(BSRCS:.c=.o)

NAME = libft.a

AR = ar 
ARFLAGS = rcus

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm 
RMFLAGS = -f

all : $(NAME)

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJ)

$(NAME) : $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

bonus : $(OBJS) $(BOBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ) $(BOBJS)
	
.c.o :
	$(CC) $(CFLAGS) -c -I $(HEADER) $< -o $@
	
clean :
	$(RM) $(RMFLAGS) $(OBJ) $(BOBJS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re
