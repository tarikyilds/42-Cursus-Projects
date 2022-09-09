/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:16:39 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/08 03:16:42 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	bit_count(t_data *a_stack)
{
	int	bit_size;
	int	size;

	bit_size = 0;
	size = a_stack->size;
	while (size > 1)
	{
		bit_size++;
		size /= 2;
	}
	return (bit_size);
}

void	sort_list3(t_data *a, t_data *b, int bit, int bit_size)
{
	int	i;
	int	size;

	i = -1;
	size = b->size;
	if (bit <= bit_size)
	{
		while (++i < size)
		{
			if (((b->array[b->size - 1] >> bit) & 1) == 0)
				rotate(b, 0);
			else
				push(b, a, 0);
		}
	}
}

void	sort_list2(t_data *a, t_data *b, int bit)
{
	if (((a->array[a->size - 1] >> bit) & 1) == 0)
		push(a, b, 0);
	else
		rotate(a, 0);
}

void	sort_list(t_data *a, t_data *b)
{
	int	bit;
	int	i;
	int	size;
	int	bit_size;

	bit = -1;
	bit_size = bit_count(a);
	while (++bit <= bit_size)
	{
		i = -1;
		size = a->size;
		if (bit <= bit_size)
		{
			while (++i < size)
				if (check_in_line2(a))
					sort_list2(a, b, bit);
			sort_list3(a, b, bit + 1, bit_size);
		}
	}
	while (b->size)
		push(b, a, 0);
}
