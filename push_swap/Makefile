NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf

SRC = main.c assing_to_stack.c error.c check.c indexing.c push_swap_utils.c push_swap_utils2.c sort_smaller_list.c sort_list.c
OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
		make -C Libft
		$(CC) $(CFLAGS) $(OBJ) Libft/Libft.a -o $(NAME)

clean:	
		make clean -C Libft
		$(RM) $(OBJ)

fclean:	clean
		make fclean -C Libft
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
