NAME = libftprintf.a
CC = cc
CFLAGS =-Iincludes -Ilibft
SRCS = src/ft_printf.c \
	src/utils/ft_printf_char.c \
	src/utils/ft_printf_string.c \
	src/utils/ft_printf_pointer.c \
	src/utils/ft_printf_digit.c \
	src/utils/ft_printf_unsigned_digit.c \
	src/utils/ft_unsigned_putnbr.c \

OBJS = $(SRCS:.c=.o)

# Makeflags
MAKEFLAGS += --no-print-directory

LIBFT_DIR= libft
LIBFT= $(LIBFT_DIR)/libft.a

# 🧪 Pasta de testes isolada para apagar fácil depois
TEST_DIR = tests
TEST_NAME = $(TEST_DIR)/test
TEST_SRC = $(TEST_DIR)/main.c

# Colors
RED := \033[31m
GREEN := \033[32m
YELLOW := \033[33m
BLUE := \033[34m
RESET := \033[0m

all: $(NAME)

# 🚀 SOLUÇÃO DO SEU ERRO: Junta a libft para os testadores externos funcionarem
$(NAME): $(OBJS) $(LIBFT)
	@echo " 💻 ${GREEN}Building library:${RESET} ${NAME}"
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJS)

$(LIBFT):
	@echo " 📚 ${BLUE}Compiling:${RESET} libft"
	@$(MAKE) -C $(LIBFT_DIR)
    
# 🧪 REGRA DE TESTE ISOLADA: Cria a pasta, gera a main (se não existir) e compila lá dentro
test: $(NAME)
	@mkdir -p $(TEST_DIR)
	@if [ ! -f $(TEST_SRC) ]; then \
		echo '#include "ft_printf.h"\nint main(void)\n{\n    ft_printf("Teste isolado funciona!\\n");\n    return (0);\n}' > $(TEST_SRC); \
	fi
	@echo " 🚀 ${GREEN}Compiling test program inside $(TEST_DIR)/...${RESET}"
	@$(CC) $(CFLAGS) $(TEST_SRC) $(NAME) -o $(TEST_NAME)
	@echo " 🎉 ${GREEN}Done! Run with: ./${TEST_NAME}${RESET}"

%.o: %.c
	@echo " 🛠️ ${BLUE} Compiling:${RESET} $< to $@"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo " 🧹 ${YELLOW}Cleaning: ${RESET}project objects"
	@rm -f $(OBJS)
	@echo " 🧹 ${YELLOW}Cleaning: ${RESET}libft objects"
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@echo " 💣 ${YELLOW}Cleaning: ${RESET}everything"
	@rm -f $(NAME)
	@rm -rf $(TEST_DIR)
	@$(MAKE) -C $(LIBFT_DIR) fclean

# Regra bônus para apagar os testes manualmente a qualquer momento
cleantest:
	@echo " 🗑️ ${RED}Removing test directory...${RESET}"
	@rm -rf $(TEST_DIR)

re: fclean all

.PHONY: all clean fclean re test cleantest