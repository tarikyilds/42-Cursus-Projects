/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_errors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <tyildiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:33:11 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/16 14:29:14 by tyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_line_boundry_error(void)
{
	ft_printf("Error!\nMap line too long...\n");
	exit(1);
}

void	map_bottom_or_top_error(void)
{
	ft_printf("Error!\nMap bottom or top wall error...\n");
	exit(1);
}

void	map_left_right_wall_error(void)
{
	ft_printf("Error!\nMap left or right wall error...\n");
	exit(1);
}

void	map_type_error(void)
{
	ft_printf("Error!\nMsg: .ber file type error...\n");
	exit(1);
}

void	map_parent_error(t_data *data, int i)
{
	free(data->buffer);
	ft_map_free(data);
	if (i == 2)
		map_line_boundry_error();
	else if (i == 3)
		map_left_right_wall_error();
	else if (i == 4)
		map_bottom_or_top_error();
	else
		ft_printf("Error!\nGeçmiş olsun kolay gelsin.\n");
	exit(1);
}
