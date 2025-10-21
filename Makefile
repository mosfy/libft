
NAME = libft.a

TEST = a.out

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
      ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strrchr.o ft_strchr.o
OBJ = $(SRC:.c=.o)

TEST_OBJ = main.o

HEADER = libft.h

all: $(NAME) $(TEST)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(TEST): $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(TEST_OBJ) -L. -lft -o $(TEST)

clean:
	- rm -f $(OBJ) $(TEST_OBJ)

fclean: clean
	- rm -f $(NAME) $(TEST)
	

