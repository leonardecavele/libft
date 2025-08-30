NAME = libft.a

CC = cc
AR = ar rcs
CFLAGS = -MMD -MP -Wall -Wextra -Werror -I.

SRCS = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c

OBJS = $(SRCS:.c=.o)
DEPS = $(OBJS:.o=.d)

BSRCS = \
	ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstsize_bonus.c

BOBJS = $(BSRCS:.c=.o)
BDEPS = $(BOBJS:.o=.d)

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJS) $(BOBJS)
	$(AR) $(NAME) $(OBJS) $(BOBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(DEPS) $(BOBJS) $(BDEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS) $(BDEPS)
