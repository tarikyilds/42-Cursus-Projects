/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:14:02 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/08 03:14:06 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(int *sort, t_data *a)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < a->size)
	{
		sort[i] = a->array[i];
		i++;
	}	
	i = -1;
	while (++i < a->size)
	{
		j = i + 1;
		while (j < a->size)
		{
			if (sort[i] > sort[j])
			{
				tmp = sort[i];
				sort[i] = sort[j];
				sort[j] = tmp;
			}
			j++;
		}
	}
}

void	indexing(t_data *a)
{
	int	*sort;
	int	i;
	int	j;

	sort = (int *)malloc(sizeof(int) * a->size);
	ft_sort(sort, a);
	i = 0;
	while (i < a->size)
	{
		j = -1;
		while (++j < a->size)
		{
			if (a->array[i] == sort[j])
			{
				a->array[i] = j;
				break ;
			}	
		}
		i++;
	}
	free(sort);
}
