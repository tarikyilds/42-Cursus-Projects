/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <tyildiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:30:05 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/16 12:01:12 by tyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "./mlx/mlx.h"
# include "./Libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include "./get_next_line/get_next_line.h"

# define PL_IMG "./img/player.xpm"
# define BG_IMG "./img/background.xpm"
# define ED_IMG "./img/exit_door.xpm"
# define WL_IMG "./img/walls.xpm"
# define CL_IMG "./img/collectible.xpm"

typedef struct s_data
{
	void	*mlx;
	void	*mlx_win;
	void	**img;
	int		img_x;
	int		img_y;
	int		position_x;
	int		position_y;
	int		p_position;
	int		collectible;
	int		map1_collec;
	int		map2_collec;
	int		map1_exit;
	int		map2_exit;
	int		exp;
	int		step;
	size_t	map_width;
	size_t	map_height;
	int		line;
	int		glob_int;
	char	*buffer;
	char	**map;
}	t_data;

int		xbutton(t_data *data);
void	get_map(t_data *data, char *argv2);
void	take_image(t_data *data);
void	for_player(t_data *data, int i);
void	put_image_to_window(t_data *data);
void	move_down(t_data *data);
void	move_up(t_data *data);
void	move_right(t_data *data);
void	move_left(t_data *data);
void	game_finish(t_data *data);
int		key_events(int keycode, t_data *data);
void	map_line_boundry_error(void);
void	map_bottom_or_top_error(void);
void	map_left_right_wall_error(void);
void	map_type_error(void);
void	map_parent_error(t_data *data, int i);
void	check_map_parent(t_data *data);
int		check_map_type(char *argv2);
void	check_map_wall(t_data *data);
void	put_image_background(t_data *data);
void	ft_map_free(t_data *data);
void	ft_img_free(t_data *data);
void	write_scr(t_data *data);
void	validpath(t_data *data);
void	validpath1(t_data *data, int a, char *map);
void	validpath2(t_data *data, int a, char *map);
void	validpathcheck(t_data *data, char *map, int k);
char	*check_cz_char(t_data *data, char *map, int k);
void	put_image_part_two(t_data *data, int i);
char	*check_cz_char_repeat(t_data *data, char *map, int k, int r);
void	valid_get_items(t_data *data);
void	valid_exit(t_data *data);
char	*check_cz_char_two(t_data *data, char *map, int k, int i);
void	check_cz_char_three(t_data *data, char *map, int k, int i);

#endif
