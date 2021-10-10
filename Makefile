OBJS	= atoi.o\
				memcpy.o\
				putchar_fd.o\
				strchr.o\
				isdigit.o\
				strnstr.o\
				strlcpy.o\
				strjoin.o\
				isascii.o\
				memcmp.o\
				split.o\
				strlen.o\
				isprint.o\
				strncmp.o\
				strdup.o\
				isalpha.o\
				calloc.o\
				strrchr.o\
				toupper.o\
				memmove.o\
				strtrim.o\
				bzero.o\
				memset.o\
				substr.o\
				memchr.o\
				strlcat.o\
				tolower.o\
				putendl_fd.o\
				isalnum.o\
				putstr_fd.o\

SOURCE	= atoi.c memcpy.c putchar_fd.c strchr.c isdigit.c strnstr.c strlcpy.c strjoin.c isascii.c memcmp.c split.c strlen.c isprint.c strncmp.c strdup.c isalpha.c calloc.c strrchr.c toupper.c main.c memmove.c strtrim.c bzero.c memset.c substr.c memchr.c strlcat.c tolower.c putendl_fd.c isalnum.c putstr_fd.c
HEADER	= libft.h
MAIN	= main.c
OUT	= main.o
CC	 = gcc
FLAGS	 = -Wall -Werror -Wextra
COMP	=$(CC) $(FLAGS)
# -g option enables debugging mode 
# -c flag generates object code for separate files

# do everything
build:
	make objs
	make main
	make run
	make clean

# make objs out of lib files
objs: $(SOURCE) $(HEADER)
	$(COMP) -c $(SOURCE)

# compile everything together
main: $(MAIN) $(OBJS)
	$(COMP) $^ -o $(OUT)

# clean house
clean:
	rm -f $(OBJS) $(OUT)

# run the program
run: $(OUT)
	./$(OUT)