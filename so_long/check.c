/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <tyildiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:19:27 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/11 00:40:31 by tyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map_type(char *argv2)
{
	size_t	size;

	if (!argv2)
		return (0);
	size = ft_strlen(argv2) - 1;
	if (argv2[size] == 'r' && argv2[size - 1] == 'e'
		&& argv2[size - 2] == 'b' && argv2[size - 3] == '.')
		return (1);
	else
		map_type_error();
	return (0);
}

void	check_map_parent(t_data *data)
{
	char	*map;
	int		player;
	int		exit;
	int		other;

	other = 0;
	exit = 0;
	player = 0;
	map = data->buffer;
	while (*map)
	{
		if (*map == 'P')
			player++;
		else if (*map == 'C')
			data->collectible++;
		else if (*map == 'E')
			exit++;
		else if ((*map != '1' && *map != '0') || *map == '\n')
			other++;
		map++;
	}
	if (!(player == 1 && data->collectible >= 1 && exit >= 1)
		|| (int)data->map_height != ++other)
		map_parent_error(data, 1);
}

void	check_map_wall(t_data *data)
{
	int	i;
	int	j;

	i = -1;
	while (data->map[++i])
		if (ft_strlen(data->map[i]) != data->map_width)
			map_parent_error(data, 2);
	i = -1;
	while (data->map[++i])
		if (data->map[i][0] != '1' || data->map[i][data->map_width - 1] != '1')
			map_parent_error(data, 3);
	j = i - 1;
	data->map_height = j + 1;
	i = -1;
	while (data->map[0][++i] && data->map[j][i])
		if (data->map[0][i] != '1' || data->map[j][i] != '1')
			map_parent_error(data, 4);
	check_map_parent(data);
}
