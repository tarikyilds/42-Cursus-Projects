NAME					= libftprintf.a
CC                                      = gcc
SRCS					= ft_printf.c ft_printf_utils.c
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
