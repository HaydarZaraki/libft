SRCS	= ft_strlen.c \
		ft_bzero.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_strnstr.c \
		ft_putnbr_fd.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_atoi.c \
		ft_split.c

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstclear.c

OBJS	= ${SRCS:.c=.o} 
OBJ_BONUS = ${BONUS:.c=.o}
NAME	= libft.a
LIBC	= ar rc
LIBR	= ranlib
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I .

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}


bonus: ${NAME} ${OBJ_BONUS}
		${LIBC} ${NAME} ${OBJ_BONUS}

all: ${NAME} ${bonus}

clean:
	${RM} ${OBJS} ${OBJ_BONUS}

fclean: clean
	${RM} ${NAME} ${bonus}

re: fclean all