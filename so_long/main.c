/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <tyildiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:20:00 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/16 12:12:58 by tyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	control(char *buffer, char *tmp)
{
	if (!tmp)
	{
		free(buffer);
		ft_printf("Error!\nYour map is NULL...\n");
		exit(1);
	}
}

void	get_map_part_two(t_data *data, char *buffer)
{
	data->buffer = buffer;
	data->map = ft_split(buffer, '\n');
	check_map_wall(data);
}

void	get_map(t_data *data, char *argv2)
{
	int		fd;
	char	*tmp;
	char	*buffer;
	char	*buff;

	buff = NULL;
	fd = open(argv2, O_RDONLY);
	if (fd < 0)
	{
		ft_printf("Error!\nYour map was not found...");
		exit(1);
	}
	buffer = ft_calloc(sizeof(char), 1);
	tmp = get_next_line(fd);
	control(buffer, tmp);
	data->map_width = ft_strlen(tmp) - 1;
	while (tmp)
	{
		buff = ft_strjoin(buffer, tmp);
		free(buffer);
		free(tmp);
		buffer = buff;
		tmp = get_next_line(fd);
	}
	get_map_part_two(data, buffer);
}

int	mlxcontrol(t_data *data)
{
	data->mlx = mlx_init();
	if (data->mlx == 0)
	{
		ft_printf("Error!\nFailed to create mlx...");
		free(data);
		exit(0);
	}
	return (1);
}

int	main(int ac, char **argv)
{
	t_data	*data;

	if (ac == 2)
	{
		data = calloc(sizeof(t_data), 1);
		if (!data)
			exit(1);
		mlxcontrol(data);
		if (check_map_type(argv[1]))
			get_map(data, argv[1]);
		else
			map_type_error();
		validpath(data);
		take_image(data);
		data->mlx_win = mlx_new_window(data->mlx, data->map_width * 64, \
		data->map_height * 64, "so_long");
		put_image_background(data);
		put_image_to_window(data);
		write_scr(data);
		mlx_hook(data->mlx_win, 2, 1L << 0, key_events, data);
		mlx_hook(data->mlx_win, 17, 0, xbutton, data);
		mlx_loop(data->mlx);
	}
}
