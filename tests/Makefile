#=====================================#
#========= General variables =========#
#=====================================#

NAME := bin/tester
INCLUDE_DIR := ../include
SRC_DIR := src
OBJS_DIR := objs

#=====================================#
#============ Input files ============#
#=====================================#

CRITERION_DIR = -L/usr/local/Cellar/criterion/2.4.0_1/lib/

LIBS := ../libft.a

LIBS_HEADERS := -I /usr/local/Cellar/criterion/2.4.0_1/include

INC := -I $(INCLUDE_DIR) $(LIBS_HEADERS)

SRCS :=	main.c	\

OBJS = $(addprefix $(OBJS_DIR)/,$(SRCS:.c=.o))

#=====================================#
#========= Command arguments =========#
#=====================================#

CC = gcc
CFLAGS = -Wall -Werror -Wextra $(INC)
LDFLAGS = $(CRITERION_DIR) -lcriterion

#=====================================#
#=============== Rules ===============#
#=====================================#

objs/%.o:src/%.c
	@mkdir -p $(dir $@)
	@$(CC) -c $(CFLAGS) -o $@ $^
	@echo "🔨 Compiling: $^"
	
all: $(NAME)

$(NAME): $(OBJS) $(LIBS)
	@$(CC) $(OBJS) $(LDFLAGS) $(LIBS) -o $(NAME)
	@echo "✅ Built $(NAME)"

run: $(NAME)
	@./$(NAME)

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all run

.PHONY: all re run clean fclean