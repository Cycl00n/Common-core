# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/03 11:34:53 by clnicola          #+#    #+#              #
#    Updated: 2025/07/03 19:51:35 by clnicola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
C_FLAGS = -Wall -Wextra -Werror
SRC_DIR = ft_printf
SOURCES = \
ft_printf.c \
ft_putchar.c \
ft_putstr.c \
ft_putnbr.c \
select_output.c \
moduloprint.c \
put_hexa_void.c \
ft_putnbr_unsigned.c \
put_hexa.c \
put_hexa_cap.c \

HEADER = $(SRC_DIR)/ft_printf.h
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