NAME = libftprintf.a

all : $(NAME)

CC = cc

CFLAGS = -Wall -Wextra -Werror 

SRCS =	ft_printchar.c\
	ft_printdigit.c\
	ft_printf.c\
       	ft_printp.c \
	ft_printstring.c \
	ft_printu.c \
	ft_printx.c \
	ft_printX.c \
	ft_printf.h \
	chheck.c \

OBJ = $(SRCS:.c=.o)

$(NAME) : $(OBJ)
	ar rcs $(NAME)  $(OBJ)

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -f *.o
	rm -f printf.a

fclean : clean 
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
