# Source, Executable, Includes, Library Defines
INCL   =
SRC    = *.c
OBJ    = $(SRC:.c=.o)
CUR = ft_memset.c

# Compiler, Linker Defines
CC      = clang
CFLAGS  = -Wall -Wextra -Werror
NAME = libft.a

# Link all Object Files with external Libraries into Binaries
all : $(NAME)


$(NAME) : $(OBJ)
       $(CC) $(LDFLAGS) $(OBJ)

# Create a gdb/dbx Capable Executable with DEBUG flags turned on
debug:
       $(CC) -g3 $(SRC)

# Clean Up Objects, Exectuables, Dumps out of source directory
clean:
       rm -f $(OBJ)

cleanf: clean
		rm -f $(NAME) a.out core
