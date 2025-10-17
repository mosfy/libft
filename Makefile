
NAME = libft.a

TEST = a.out

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c ft_bzero.c
OBJ = $(SRC:.c=.o)

TEST_SRC = main.c
TEST_OBJ = $(TEST_SRC:.c=.o)

HEADER = libft.h

all: $(NAME) $(TEST)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo " Libft compilée avec succès"

$(TEST): $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(TEST_OBJ) -L. -lft -o $(TEST)
	@echo " Programme compilé : $(TEST)"

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	-del /Q $(OBJ) $(TEST_OBJ) 2>nul || rm -f $(OBJ) $(TEST_OBJ)
	@echo " Fichiers objets supprimés"

fclean: clean
	-del /Q $(NAME) $(TEST) 2>nul || rm -f $(NAME) $(TEST)
	@echo " Tout supprimé"

re: fclean all

