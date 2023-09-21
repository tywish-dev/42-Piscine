CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
INC_DIR = includes
OBJ_DIR = objs

SRCS = $(addprefix $(SRC_DIR)/, ft_puthcar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

TARGET = libft.a

all: $(TARGET)

$(TARGET): $(OBJS)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INC_DIR) -o $@ -c $<

clean
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(TARGET)

re: fclean all

.PHONY: all clean fclean re
