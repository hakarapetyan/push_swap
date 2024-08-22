NAME = push_swap

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address

SRCS = add_to_stack.c\
validation.c\
utils.c\
sort.c\
swap.c\
push.c\
rotate.c\
reverse.c\
push_swap.c\
ft_split.c\
sort_for_2_3.c\
sort_for_4_5.c\
create_ar.c\
get_ind.c\
list_operation.c\
math.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS) push_swap.h Makefile
	cc $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re