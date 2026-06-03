NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes -Ilibft
SRCS = src/ft_printf.c

OBJS = $(SRCS:.c=.o)

# Makeflags
MAKEFLAGS += --no-print-directory

LIBFT_DIR= libft
LIBFT= $(LIBFT_DIR)/libft.a
LIBRL= -lreadline

# Colors
RED := \033[31m
GREEN := \033[32m
YELLOW := \033[33m
BLUE := \033[34m
RESET := \033[0m

all: $(NAME)

# $(NAME): $(OBJS)
# 	ar rcs $(NAME) $(OBJS)

$(NAME): $(OBJ) $(LIBFT)
	@echo " 💻 ${GREEN}Building:${RESET} ${NAME}"
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME) $(LIBRL)

$(LIBFT):
	@echo " 📚 ${BLUE}Compiling:${RESET} libft"
	@$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
