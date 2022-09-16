/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_utils_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <tyildiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 00:49:19 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/16 14:27:42 by tyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	valid_exit(t_data *data)
{
	if (data->map1_exit != 0 || data->map1_collec != 0)
	{
		ft_printf("Error!\nYour map path is not valid...");
		exit(1);
	}
	if (data->map2_exit != 1 || data->map2_collec != 0)
	{
		ft_printf("Error!\nYour map path is not valid...");
		exit(1);
	}
}

char	*check_cz_char_repeat(t_data *data, char *map, int k, int r)
{
	while (--r >= 0)
		map = check_cz_char(data, map, k);
	return (map);
}

char	*check_cz_char_two(t_data *data, char *map, int k, int i)
{
	while (map[++i] != '\0')
	{
		if (map[i] == 'C')
		{
			if (map[i - 1] == '2' || map[i + 1] == '2' || \
			map[i + data->line + 1] == '2' \
			|| map[i - data->line - 1] == '2')
				map[i] = '2';
		}
		if (map[i] == '2')
		{
			if (map[i - 1] == '0' || map[i + 1] == '0'\
			|| map[i + data->line + 1] == '0'\
			|| map[i - data->line - 1] == '0')
			{
				if (k == 0)
					validpath1(data, i, map);
				else if (k == 1)
					validpath2(data, i, map);
			}
		}
	}
	return (map);
}

void	check_cz_char_three(t_data *data, char *map, int k, int i)
{
	if (map[i + 1] == '0' || map[i - 1] == '0' || \
	map[i + data->line + 1] == '0' || \
	map[i - data->line - 1] == '0')
	{
		if (k == 0)
			validpath1(data, i, map);
		else if (k == 1)
			validpath2(data, i, map);
	}
	if (map[i + 1] == 'C' || map[i - 1] == 'C' || \
	map[i + data->line + 1] == 'C' || \
	map[i - data->line - 1] == 'C')
	{
		if (k == 0)
			validpath1(data, i, map);
		else if (k == 1)
			validpath2(data, i, map);
	}
}

char	*check_cz_char(t_data *data, char *map, int k)
{
	int	i;

	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == '0')
		{
			if (map[i + 1] == '2' || map[i - 1] == '2' || \
			map[i + data->line + 1] == '2' || \
			map[i - data->line - 1] == '2')
				check_cz_char_three(data, map, k, i);
		}
		i++;
	}	
	return (check_cz_char_two(data, map, k, -1));
}
