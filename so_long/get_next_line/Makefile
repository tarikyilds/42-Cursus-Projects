NAME					= get_next_line.a
CC                                      = gcc
SRCS					= get_next_line.c get_next_line_utils.c
OBJS					= $(SRCS:%.c=%.o)
FLAGS					= -Wall -Wextra -Werror
$(NAME)		:	$(OBJS)
			$(CC) $(FLAGS) -c $(SRCS) -I./
			ar rc $(NAME) $(OBJS)
all	:	$(NAME)
clean	:
		rm -f $(OBJS)
fclean	:	clean
		rm -f $(NAME)
re	:	fclean all

norm:
	@norminette ./*.[ch] | grep ': OK!' -v || printf '\nAll True!\n\n'

.PHONY	:	all clean fclean re
