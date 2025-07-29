# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Program name
NAME = libft.a

# Source and object files
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c \
       ft_memcmp.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	   ft_strnstr.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_strdup.c \
       ft_tolower.c ft_toupper.c ft_calloc.c ft_substr.c ft_strjoin.c \
	   ft_strtrim.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	   ft_split.c ft_putchar_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c \


OBJS = $(SRCS:.c=.o)

#Bonus sources
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
             ft_lstadd_back.c \
			#  ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
            #  ft_lstmap.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Rule :All - to complete the project
all: $(NAME)

#Rule : Name - bulid the library same as $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# Rule : clean - Remove object files
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

# Rule : fclean - To remove object and excecutable files 
fclean: clean
	rm -f $(NAME)

# Rule : re - Rebuild everything from scratch
re: fclean all

.PHONY: all clean fclean re bonus   