SRCS = ft_strlen.c
OBJS = $(SRC:.c=.o)
NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
    ar -rcs $(NAME) $(OBJS)

$(OBJS) :
    $(CC) $(FLAGS) -c $(@:.o=.c) -o $@

clean:
    /bin/rm -f $(OBJS)

fclean: clean
    /bin/rm -f $(NAME)

re: fclean all

so:
    $(CC) -c $(FLAGS) -fPIC $(SRC)
    $(CC) -Shared -o libft.so $(OBJS)

.PHONY: all clean fclean re so
