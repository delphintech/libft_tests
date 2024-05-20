# Compiler
CC = gcc

# Flag compiler
CFLAGS += -Werror -Wall -Wextra

# Nom du programme
NAME = ../test

LIB	= -L../ -lft

INCLUDES = -I "../"

# Liste des fonctions
SRC_NAME = test_isalpha \
	test_isdigit \
	test_toupper \
	test_tolower \
	test_isalnum \
	test_isascii \
	test_strchr \
	test_isprint \
	test_strrchr \
	test_strlen \
	test_strncmp \
	test_memset \
	test_bzero \
	test_memchr \
	test_memcpy \
	test_memcmp \
	test_memmove \
	test_strnstr \
	test_strlcpy \
	test_strlcat \
	# test_atoi \
	# test_calloc \
	# test_strdup \
	# test_substr \
	# test_strjoin \
	# test_strtrim \
	# test_split \
	# test_itoa \
	# test_strmapi \
	# test_striteri \
	# test_putchar_fd \
	# test_putstr_fd \
	# test_putendl_fd \
	# test_putnbr_fd

# Liste des sources
SRCS = $(addsuffix .c,$(SRC_NAME)) main.c

# Liste des ojets
OBJS = $(SRCS:.c=.o)

all	:
		@make $(NAME)

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIB) -std=c99   ## Les CFLAGS sont mis automatiquement

clean	:                 
		rm -f $(OBJS)				## Supprime les .o
		@$(CLEAN)           ## Supprime les ~

fclean	:	clean					## Appelle la precedente puis supprime l'executable.
		rm -f $(NAME)
		
re	:	fclean all        ## Supprime tout et recompile tout

tbug : $(OBJS)
	cc -g -o $(NAME) $(OBJS) $(LIB) -std=c99 

## Empèche Makefile d'associer le nom de ses règles à un fichier s'il en existe un 
## à leur nom dans le directory
.PHONY: all clean fclean re