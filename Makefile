NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isascii.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_tolower.c ft_toupper.c \
    ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcat.c ft_strlcpy.c \
    ft_memchr.c ft_memcpy.c ft_memset.c ft_bzero.c ft_memmove.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strmapi.c ft_striteri.c \
    ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_strtrim.c ft_itoa.c ft_split.c

OBJ = $(SRC:.c=.o)

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Magic is happening. Creating static library $(NAME)..."
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ) $(OBJ_BONUS)
	@echo "Adding bonus functions to $(NAME)..."
	ar rcs $(NAME) $(OBJ_BONUS)

clean:
	@echo "Removing object files..."
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	@echo "Removing the library $(NAME)..."
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re