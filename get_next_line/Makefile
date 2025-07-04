NAME = get_next_line.a
CC = cc
C_FLAGS = -Wall -Wextra -Werror D BUFFER_SIZE=$(BUFFER_SIZE)
BUFFER_SIZE = 100
SRC_DIR = get_next_line
SOURCES = \
get_next_line_utils.c \
get_next_line.c \

HEADER = $(SRC_DIR)/get_next_line.h
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