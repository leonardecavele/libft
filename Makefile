NAME = libft.a

CC = cc
CFLAGS = -MMD -MP -c -Wall -Wextra -Werror -I$(INCD)

SRC_DIR = srcs
INCD = includes

SRCS = \
	$(SRC_DIR)/ft_putchar.c \
	$(SRC_DIR)/ft_swap.c \
	$(SRC_DIR)/ft_putstr.c \
	$(SRC_DIR)/ft_strlen.c \
	$(SRC_DIR)/ft_strcmp.c 

OBJS = $(SRCS:.c=.o)
DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)
