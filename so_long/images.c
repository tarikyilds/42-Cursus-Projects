/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <tyildiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:19:46 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/16 00:38:36 by tyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_image_background(t_data *data)
{
	int	i;

	i = 0;
	data->position_x = 0;
	data->position_y = 0;
	while (data->buffer[i] != 0)
	{
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->img[2],
			data->position_x, data->position_y);
		data->position_x += 64;
		if (data->buffer[i] == '\n')
		{
			data->position_x = 0;
			data->position_y += 64;
		}
		i++;
	}
	data->position_x = 0;
	data->position_y = 0;
}

void	take_image(t_data *data)
{
	data->img = malloc((sizeof(void *)) * 6);
	data->img[0] = mlx_xpm_file_to_image(data->mlx, PL_IMG, \
	&data->img_x, &data->img_y);
	data->img[1] = mlx_xpm_file_to_image(data->mlx, WL_IMG, \
	&data->img_x, &data->img_y);
	data->img[2] = mlx_xpm_file_to_image(data->mlx, BG_IMG, \
	&data->img_x, &data->img_y);
	data->img[3] = mlx_xpm_file_to_image(data->mlx, ED_IMG, \
	&data->img_x, &data->img_y);
	data->img[4] = mlx_xpm_file_to_image(data->mlx, CL_IMG, \
	&data->img_x, &data->img_y);
	data->img[5] = 0;
}

void	for_player(t_data *data, int i)
{
	mlx_put_image_to_window(data->mlx, data->mlx_win, data->img[0], \
	data->position_x, data->position_y);
	data->p_position = i;
}

void	put_image_part_two(t_data *data, int i)
{
	if (data->buffer[i] == '0')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->img[2], \
			data->position_x, data->position_y);
	if (data->buffer[i] == 'C')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->img[4], \
			data->position_x, data->position_y);
	if (data->buffer[i] == 'E')
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->img[3], \
			data->position_x, data->position_y);
}

void	put_image_to_window(t_data *data)
{
	int	i;

	i = 0;
	while (data->buffer[i])
	{
		if (data->buffer[i] == '1')
			mlx_put_image_to_window(data->mlx, data->mlx_win, data->img[1], \
			data->position_x, data->position_y);
		if (data->buffer[i] == 'P')
			for_player(data, i);
		put_image_part_two(data, i);
		data->position_x += 64;
		if (data->buffer[i] == '\n')
		{
			data->position_x = 0;
			data->position_y += 64;
		}
	i++;
	}
}
