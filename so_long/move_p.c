/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <tyildiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:23:24 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/11 21:48:44 by tyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_data *data)
{
	if (data->buffer[data->p_position - data->map_width - 1] != '1'
		&& (data->buffer[data->p_position - data->map_width - 1] != 'E'
			|| data->collectible == data->exp))
	{
		data->step++;
		if (data->buffer[data->p_position - data->map_width - 1] == 'C')
			data->exp += 1;
		data->buffer[data->p_position] = '0';
		if (data->buffer[data->p_position - data->map_width - 1] == 'E')
			game_finish(data);
		data->buffer[data->p_position - data->map_width - 1] = 'P';
		ft_printf("%d\n", data->step);
	}
}

void	move_down(t_data *data)
{
	if (data->buffer[data->p_position + data->map_width + 1] != '1'
		&& (data->buffer[data->p_position + data->map_width + 1] != 'E'
			|| data->collectible == data->exp))
	{
		data->step++;
		if (data->buffer[data->p_position + data->map_width + 1] == 'C')
			data->exp += 1;
		data->buffer[data->p_position] = '0';
		if (data->buffer[data->p_position + data->map_width + 1] == 'E')
			game_finish(data);
		data->buffer[data->p_position + data->map_width + 1] = 'P';
		ft_printf("%d\n", data->step);
	}
}

void	move_right(t_data *data)
{
	if (data->buffer[data->p_position + 1] != '1'
		&& (data->buffer[data->p_position + 1] != 'E'
			|| data->collectible == data->exp))
	{
		data->step++;
		if (data->buffer[data->p_position + 1] == 'C')
			data->exp += 1;
		data->buffer[data->p_position] = '0';
		if (data->buffer[data->p_position + 1] == 'E')
			game_finish(data);
		data->buffer[data->p_position + 1] = 'P';
		ft_printf("%d\n", data->step);
	}
}

void	move_left(t_data *data)
{
	if (data->buffer[data->p_position - 1] != '1'
		&& (data->buffer[data->p_position - 1] != 'E'
			|| data->collectible == data->exp))
	{
		data->step++;
		if (data->buffer[data->p_position - 1] == 'C')
			data->exp += 1;
		data->buffer[data->p_position] = '0';
		if (data->buffer[data->p_position - 1] == 'E')
			game_finish(data);
		data->buffer[data->p_position - 1] = 'P';
		ft_printf("%d\n", data->step);
	}
}

int	key_events(int keycode, t_data *data)
{
	if (keycode == 13)
		move_up(data);
	if (keycode == 0)
		move_left(data);
	if (keycode == 1)
		move_down(data);
	if (keycode == 2)
		move_right(data);
	if (keycode == 53)
		game_finish(data);
	mlx_clear_window(data->mlx, data->mlx_win);
	put_image_background(data);
	put_image_to_window(data);
	write_scr(data);
	return (0);
}
