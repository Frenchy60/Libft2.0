SRC = 	ft_isspace.c ft_ispartofset.c ft_atoi.c \
	ft_strlen.c ft_strchr.c ft_strncmp.c ft_strlcpy.c \
	ft_strlcat.c ft_strdup.c ft_strjoin.c ft_strtrim.c \
	ft_substr.c ft_calloc.c \
        ft_isalpha.c ft_isdigit.c ft_isprint.c ft_isascii.c \
        ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c ft_bzero.c
# ft_isalmun.c ft_strrchr.c ft_strnstr.c ft_toupper.c ft_tolower.c  #
OBJS = ${SRC:.c=.o}
NAME = libft.a

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

${OBJS} :
	gcc -Wall -Werror -Wextra -c ${@:.o=.c} -o $@

clean:
	/bin/rm -f ${OBJS}

fclean: clean
	/bin/rm -f ${NAME}
	/bin/rm -f libft.so

re: fclean all

so:
	gcc -c -Wall -Werror -Wextra -fPIC ${SRC}
	gcc -shared -o libft.so ${OBJS}


.PHONY : all clean fclean re
