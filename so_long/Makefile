NAME = so_long
CC = gcc 
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

MFLAGS = ./mlx/libmlx.a ./ft_printf/libftprintf.a ./Libft/libft.a ./get_next_line/get_next_line.a -I./mlx

SRCS = main.c check.c map_errors.c move_p.c images.c so_utils.c so_utils_two.c game_finish.c
SRCS_BONUS = ./bonus/write_screen.c 
SRC =  write_scree.c

OBJS = $(SRCS:.c=.o) $(SRC:.c=.o)
OBJS_BONUS = $(SRCS:.c=.o) $(SRCS_BONUS:.c=.o) 

CLEAN = make clean -C
FCLEAN = make fclean -C
GETLIB = make -C

all: $(MFLAGS) $(NAME)

$(MFLAGS):
	$(GETLIB) ./ft_printf
	$(GETLIB) ./get_next_line
	$(GETLIB) ./Libft
	$(GETLIB) ./mlx

$(NAME) : $(OBJS)
		$(CC) $(OBJS) $(MFLAGS) $(CFLAGS) -framework OpenGL -framework AppKit -o $(NAME)

bonus:  $(MFLAGS) $(NAME)_bonus

$(NAME)_bonus : $(OBJS_BONUS)
		$(CC) $(MFLAGS) $(OBJS_BONUS) $(CFLAGS) -framework OpenGL -framework AppKit -o $(NAME)_bonus

clean:
		$(RM) $(OBJS)
		$(RM) $(OBJS_BONUS)
		$(CLEAN) ./Libft
		$(CLEAN) ./ft_printf
		$(CLEAN) ./get_next_line

fclean: clean
		$(RM) $(NAME)
		$(RM) $(NAME)_bonus
		$(FCLEAN) ./Libft
		$(FCLEAN) ./ft_printf
		$(FCLEAN) ./get_next_line

norm:
	make norm -C Libft
	make norm -C get_next_line
	make norm -C ft_printf
	@norminette ./*.[ch] | grep ': OK!' -v || printf '\nmake norm -C so_long\n\nAll True!\n\n'

re:	fclean all

.PHONY: all clean fclean re bonus