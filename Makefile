NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

INCLUDES = ./libft.h

FILES = ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strnstr.c	\
		ft_strncmp.c	\
		ft_atoi.c		\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_split.c		\
		ft_itoa.c		\
		ft_strmapi.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c  

FILES_B = ft_lstnew.c			\
		  ft_lstadd_front.c		\
		  ft_lstsize.c			\
		  ft_lstlast.c			\
		  ft_lstadd_back.c		\
		  ft_lstdelone.c		\
		  ft_lstclear.c			\
		  ft_lstiter.c			\
		  ft_lstmap.c


OBJS = $(FILES:.c=.o)

OBJS_B = $(FILES_B:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	rm -rf $(NAME)

re: fclean all

$(NAME) : $(OBJS)
	ar -crs $@ $^

bonus : $(OBJS) $(OBJS_BONUS)
	ar -crs $(NAME) $^

.PHONY: bonus all clean fclean re
