NAME = push_swap

CC = cc
C_FLAGS = -Wall -Wextra -Werror

LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a

SOURCES = \
	push_swap.c \
	lst_helpers.c\
	lst_helpers2.c\
	assign_a.c\
	operations.c\
	operations2.c\
	operation3.c\
	errors.c\
	sorting_helpers.c\
	free_stack.c\

HEADER = -I.

OBJ = $(SOURCES:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(C_FLAGS) $(OBJ) $(LIBFT) -o $(NAME)

clean: 
	rm -rf $(OBJ)
	@echo "Temp files removed"

fclean: clean
	rm -rf $(NAME)
	@echo "Temp files and binaries removed."

re: fclean all
