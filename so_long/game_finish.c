/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_finish.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <tyildiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:32:41 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/16 14:53:08 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	xbutton(t_data *data)
{
	game_finish(data);
	return (0);
}

void	ft_img_free(t_data *data)
{
	int	i;

	i = -1;
	while (++i < 5)
		mlx_destroy_image(data->mlx, data->img[i]);
	free(data->img);
}

void	ft_map_free(t_data *data)
{
	int	i;

	i = 0;
	while (data->map[i])
	{
		free(data->map[i]);
		data->map[i++] = NULL;
	}
	free(data->map);
}

void	game_finish(t_data *data)
{
	if (data->collectible == data->exp)
		ft_printf("Congratulations!\nYour total\
				number of steps = %d\n", data->step);
	ft_img_free(data);
	mlx_destroy_window(data->mlx, data->mlx_win);
	ft_map_free(data);
	free(data->buffer);
	exit(1);
}
