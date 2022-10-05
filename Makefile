# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ageiser <ageiser@student.42barcelo>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 11:26:03 by ageiser           #+#    #+#              #
#    Updated: 2022/10/05 15:38:44 by ageiser          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#nom de sortie:
NAME = libft.a

BNUS = .bonus

#nom des fichiers a compiler:
SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
  		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c  ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

#Flags de compilation
CFLAGS = -Wall -Wextra -Werror

#Shell d'effacement
RM = rm -f

#compilateur
CC = gcc

# cree et maintient les archives de la bibliotheques (man ar
# r = insere les fichiers memebres dans l-archive
# c cree l-archive
# s ecrit un objet a l-index des fichiers
LIB = ar rcs

#include le fichier libft.h
INCLUDE = libft.h

#les obj seront les sources en .c qui deviendraoont des .o
OBJ = $(SRC:.c=.o)

#nom des fichiers bonus a compiler
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

#les bonus obj seront les sources en .c qui deviendraont des .o pour les bonus
BONUS_OBJ = $(BONUS:.c=.o)

#commande principale
all : $(NAME)

#commande lors de NAME
# $@ = liste des arguments passes au script
# $? = derniere modification
$(NAME): $(OBJ)
	$(LIB) $@ $?

#transformation des .c en .o
%.o: %.c
	$(CC) -c $(CFLAGS) $?

#commande effacement des .o
clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

#commande effacement des .o et du NAME

fclean: clean
	$(RM) $(NAME)

# commande principale + fclean
re: fclean all

#commande principale des bonus
#@touch modifie seulement les derniers changements
bonus: $(OBJ) $(BONUS_OBJ)
		@touch $@
		$(LIB) $(NAME) $(OBJ) $(BONUS_OBJ)

#.PHONY indique ce qui n'est pas un nom de fichier
.PHONY: clean fclean all re bonus
