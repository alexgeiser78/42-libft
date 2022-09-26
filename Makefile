# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ageiser <ageiser@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 11:26:03 by ageiser           #+#    #+#              #
#    Updated: 2022/09/24 18:40:33 by ageiser          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = *.c
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
CC = gcc
LIB = ar rcs
INCLUDE = libft.h
OBJ = $(SRC:.c=.o)

all : $(NAME)


$(NAME): $(OBJ)
	$(LIB) $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?


clean:
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all
	
.PHONY: clean fclean all re
