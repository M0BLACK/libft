# --- Makefile --- NAME = libft.a
# --- Makefile --- 

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_strdup.c ft_strlcat.c \
		ft_memset.c ft_strchr.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c ft_lstlast.c ft_lstdelone.c \
	 ft_lstclear.c ft_lstiter.c ft_lstiter.c ft_lstmap.c

OBJECTS = $(SRCS:.c=.o)
OBJECTSB = $(SRCB:.c=.o)
heaser = libft.h

all: $(NAME)

CC = gcc

FLAGS = -Wall -Wextra -Werror

$(NAME):
		$(CC) $(FLAGS) -c $(SRCS)
		ar rcs $(NAME) $(OBJECTS)

bonus: 
		$(cc) $(FLAGS) -c $(SRCB)
		@ar rcs $(NAME) $(OBJECTSB)

clean: 
		@rm -f *.o

fclean: clean
		@rm -f $(NAME)
		
		
re: fclean all