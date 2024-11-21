SRCS	= ft_atoi.c ft_itoa.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_isalnum.c ft_isascii.c \
      ft_memcpy.c ft_memset.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_strdup.c \
	  ft_strlen.c ft_strnstr.c ft_strlcpy.c ft_strchr.c ft_strlcat.c ft_strrchr.c ft_strjoin.c \
	  ft_split.c ft_putendl_fd.c ft_striteri.c ft_strmapi.c ft_strtrim.c ft_tolower.c ft_toupper.c \
	  ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_bzero.c ft_substr.c ft_putnbr_fd.c ft_strncmp.c

BONUS	=  ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c

OBJS = $(SRCS:.c=.o)
OBJB = $(BONUS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
	ar rcs $(NAME) $@

$(NAME): $(OBJS)

bonus: $(OBJB)

clean:
	$(RM) $(OBJS) $(OBJB)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
