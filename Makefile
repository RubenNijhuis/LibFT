# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rubennijhuis <rubennijhuis@student.coda      +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/12 15:41:57 by rubennijhui   #+#    #+#                  #
#    Updated: 2022/04/24 19:15:01 by rubennijhui   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#=====================================#
#========= General variables =========#
#=====================================#

NAME := libft
INCLUDE_DIR := include
SRC_DIR := src
OBJS_DIR := objs
OUTPUT := $(NAME).a

#=====================================#
#============ Input files ============#
#=====================================#

INC = -I $(INCLUDE_DIR)

SRCS =  ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_error.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_nbrlen.c \
		ft_toupper.c \
		ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c \
		ft_free_2d_array.c \
		ft_2d_arrlen.c \

OBJS = $(addprefix objs/,$(notdir $(SRCS:.c=.o)))

#=====================================#
#========= Command arguments =========#
#=====================================#

CC = gcc
CFLAGS = -Wall -Wextra -g $(INC)
LDFLAGS = 

#=====================================#
#=============== Rules ===============#
#=====================================#

objs/%.o:src/%.c
	@mkdir -p $(dir $@)
	@$(CC) -c $(CFLAGS) -o $@ $^
	@echo "🔨 Compiling: $<"

all: $(NAME)

$(NAME): $(OBJS)
	@ar -cr $(OUTPUT) $(OBJS)
	@echo "✅ Built $(NAME) \n"

clean:
	@rm -rf $(OBJS_DIR)
	@echo "🧹 Done cleaning objects"

test:
	@make run -C tests/

fclean: clean
	@rm -f $(NAME).a
	@make fclean -C tests/
	@echo "🧹 Done cleaning archive"

re: fclean all

.PHONY: all clean fclean re 
