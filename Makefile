# Source, Executable, Includes, Library Defines
HEADER	= libft.h
SRC		= $(wildcard ft_*.c)
OBJ		= $(SRC:.c=.o)

# Compiler, Linker Defines
CC		= cc
CFLAGS 	= -Wall -Wextra -Werror
NAME	= libft.a

# Link all Object Files with external Libraries into Binaries
all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $^

re: fclean all

# Create a gdb/dbx Capable Executable with DEBUG flags turned on
debug:
	$(CC) -g3 $(SRC)

# Clean Up Objects, Exectuables, Dumps out of source directory
clean:
	rm -f $(OBJ)

cleanf: clean
	rm -f $(NAME) a.out core

so:
	$(CC) -fPIC -c $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

.PHONY: all clean fclean re
