/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:13:16 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/08 03:13:21 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_again(t_data *a, t_data *b)
{
	int	i;
	int	j;

	i = 0;
	while (i < a->size)
	{
		j = i + 1;
		while (j < a->size)
		{
			if (a->array[i] == a->array[j])
				error_mes(a, b);
			j++;
		}
		i++;
	}
}

void	check_in_line(t_data *a, t_data *b)
{
	int	i;
	int	j;

	i = 0;
	while (i < a->size)
	{
		j = i + 1;
		while (j < a->size)
		{
			if (a->array[a->size - i - 1] > a->array[a->size - j - 1])
				return ;
			j++;
		}
		i++;
	}
	error_mes2(a, b);
}

int	check_in_line2(t_data *a)
{
	int	i;
	int	j;

	i = 0;
	while (i < a->size)
	{
		j = i + 1;
		while (j < a->size)
		{
			if (a->array[a->size - i - 1] > a->array[a->size - j - 1])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
