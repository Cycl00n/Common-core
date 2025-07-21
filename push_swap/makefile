
NAME = push_swap.a
OBJS = $(SOURCES:.c=.o)
CC = cc
C_FLAGS = -Wall -Wextra -Werror
SRC_DIR = push_swap
SOURCES = \
	push_swap.c
HEADER = push_swap.h

.DEFAULT_GOAL := all
HEADER = $(SRC_DIR)/push_swap.h
OBJS = $(SOURCES:.c=.o)

NAME:
	@echo "$(NAME)"

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	@echo "$(NAME) created."
	
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
	$(CC) $(C_FLAGS) -c $< -o $@ -I$(SRC_DIR)

clean: 
	rm -f $(OBJS)
	@echo "Temp files removed"

fclean: clean
	rm -f $(NAME)
	@echo "Temp files and binaries removed."
	
re: fclean all
