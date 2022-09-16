/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <tyildiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:26:59 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/16 12:03:48 by tyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	valid_get_items(t_data *data)
{
	data->line = ft_strlen(data->map[0]);
	data->map1_exit = 0;
	data->map2_exit = 0;
	data->glob_int = 0;
	data->map1_collec = 0;
	data->map2_collec = 0;
}

void	validpath(t_data *data)
{
	int		p;
	char	*map1;
	char	*map2;

	valid_get_items(data);
	map1 = malloc(sizeof(char) * 10000);
	map2 = malloc(sizeof(char) * 10000);
	while (data->buffer[data->glob_int] != '\0')
	{
		map1[data->glob_int] = data->buffer[data->glob_int];
		map2[data->glob_int] = data->buffer[data->glob_int];
		if (data->buffer[data->glob_int] == 'P')
			p = data->glob_int;
		data->glob_int++;
	}
	validpath1(data, p, map1);
	validpath2(data, p, map2);
	map1 = check_cz_char_repeat(data, map1, 0, 2);
	map2 = check_cz_char_repeat(data, map2, 1, 2);
	validpathcheck(data, map1, 0);
	validpathcheck(data, map2, 1);
	free(map1);
	free(map2);
	valid_exit(data);
}

void	validpath1(t_data *data, int a, char *map)
{
	data->glob_int = 0;
	if (map[a + 1] == '0' || map[a + 1] == 'C' || map[a + 1] == 'E')
	{
		map[a + 1] = '2';
		validpath1(data, a + 1, map);
	}
	if (map[a - 1] == '0' || map[a - 1] == 'C' || map[a - 1] == 'E')
	{
		map[a - 1] = '2';
		validpath1(data, a - 1, map);
	}
	if (map[a + data->line + 1] == '0' || map[a + data->line + 1] == 'C'
		|| map[a + data->line + 1] == 'E')
	{
		map[a + data->line + 1] = '2';
		validpath1(data, a + data->line + 1, map);
	}
	if (map[a - data->line - 1] == '0' || map[a - data->line - 1] == 'C'
		|| map[a - data->line - 1] == 'E')
	{
		map[a - data->line - 1] = '2';
		validpath1(data, a - data->line - 1, map);
	}
}

void	validpath2(t_data *data, int a, char *map)
{
	data->glob_int = 0;
	if (map[a + 1] == '0' || map[a + 1] == 'C')
	{
		map[a + 1] = '2';
		validpath2(data, a + 1, map);
	}
	if (map[a - 1] == '0' || map[a - 1] == 'C')
	{
		map[a - 1] = '2';
		validpath2(data, a - 1, map);
	}
	if (map[a + data->line + 1] == '0' || map[a + data->line + 1] == 'C')
	{
		map[a + data->line + 1] = '2';
		validpath2(data, a + data->line + 1, map);
	}
	if (map[a - data->line - 1] == '0' || map[a - data->line - 1] == 'C')
	{
		map[a - data->line - 1] = '2';
		validpath2(data, a - data->line - 1, map);
	}
}

void	validpathcheck(t_data *data, char *map, int k)
{
	int	i;

	i = 0;
	while (map[i] != '\0' && k == 0)
	{
		if (map[i] == 'C')
			data->map1_collec++;
		if (map[i] == 'E')
			data->map1_exit++;
		i++;
	}
	while (map[i] != '\0' && k == 1)
	{
		if (map[i] == 'C')
			data->map2_collec++;
		if (map[i] == 'E')
			data->map2_exit++;
		i++;
	}
}
