NAME		= Now_its_weird

CC			= c++
RM			= rm -f
CFLAGS		= -Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98

HEADER		= ./
SRCS_DIR	= ./
SRCS		= main.cpp \
			  ClapTrap.cpp \
			  ScavTrap.cpp \
			  FragTrap.cpp \
			  DiamondTrap.cpp \

ALLSRCS	= $(addprefix $(SRCS_DIR), $(SRCS))
OBJS	= $(ALLSRCS:.cpp=.o)

all	: $(NAME)

%.o		: %.cpp
	$(CC) $(CFLAGS) -I $(HEADER) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY  :	all clean fclean re