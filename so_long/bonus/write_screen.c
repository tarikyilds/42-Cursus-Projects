/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_screen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <tyildiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:54:53 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/11 12:59:50 by tyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../so_long.h"

void	write_scr(t_data *data)
{
	char	*variable;

	variable = ft_itoa(data->exp * 42);
	mlx_string_put(data->mlx, data->mlx_win, 0, 20, 0xffff99, "Game Point");
	mlx_string_put(data->mlx, data->mlx_win, 80, 20, 0xffff99, variable);
	free(variable);
	variable = ft_itoa(data->step);
	mlx_string_put(data->mlx, data->mlx_win, 150, 20, 0xffff99, "Step : ");
	mlx_string_put(data->mlx, data->mlx_win, 200, 20, 0xffff99, variable);
	free(variable);
}