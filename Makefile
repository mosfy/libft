
NAME = libft.a

TEST = a.out

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
      ft_strlen.o ft_memset.o ft_bzero.o
OBJ = $(SRC:.c=.o)

TEST_SRC = main.o
TEST_OBJ = $(TEST_SRC:.c=.o)

HEADER = libft.h

all: $(NAME) $(TEST)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo " Libft compilée avec succès"

$(TEST): $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(TEST_OBJ) -L. -lft -o $(TEST)
	@echo " Programme compilé : $(TEST)"

clean:
	- rm -f $(OBJ) $(TEST_OBJ)

fclean: clean
	- rm -f $(NAME) $(TEST)
	
re: fclean all

