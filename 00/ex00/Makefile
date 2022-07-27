NAME		= megaphone

CC			= clang++
RM			= rm -f
CFLAGS		= -Wall -Werror -Wextra

SRCS_DIR	= ./
SRCS		= megaphone.c \

ALLSRCS	= $(addprefix $(SRCS_DIR), $(SRCS))
OBJS	= $(ALLSRCS:.c=.o)

all	: $(NAME)

.c.o	:
	$(CC) $(CFLAGS) -I $(INCS_DIR) -o $@ -c $?

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY  :	all clean fclean re