# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agraton <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 12:16:20 by agraton           #+#    #+#              #
#    Updated: 2021/03/05 11:21:14 by agraton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_isspace_bonus.c ft_ispartofset_bonus.c \
	ft_strlen.c ft_strchr.c ft_strncmp.c ft_strlcpy.c \
	ft_strlcat.c ft_strdup.c ft_strjoin.c ft_strtrim.c \
	ft_substr.c ft_calloc.c ft_strmapi.c \
	ft_isalpha.c ft_isdigit.c ft_isprint.c ft_isascii.c ft_itoa.c \
	ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c \
	ft_bzero.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c  \
	ft_isalnum.c ft_strrchr.c ft_strnstr.c ft_toupper.c ft_tolower.c \
	ft_atoi.c ft_split3.c
SRC2 =	ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c  \
	ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = ${SRC:.c=.o}
OBJS2 = $(SRC2:.c=.o)
FLAGS = -Wall -Wextra -Werror
NAME = libft.a

all: ${NAME}

${NAME}: ${OBJS}
	ar -rc ${NAME} ${OBJS}

${OBJS} :
	gcc $(FLAGS) -c ${@:.o=.c} -o $@


bonus: all $(OBJS2)
	ar -rcs $(NAME) $(OBJS2)

clean:
	/bin/rm -f ${OBJS} $(OBJS2)

fclean: clean
	/bin/rm -f ${NAME}

re: fclean all

.PHONY : all clean fclean re
