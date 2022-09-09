/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:15:00 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/08 03:15:03 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_data *stack, int control)
{
	int	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->array[stack->size - 1];
	stack->array[stack->size - 1] = stack->array[stack->size - 2];
	stack->array[stack->size - 2] = tmp;
	if (control == 0)
	{
		if (stack->type == 'a')
			write(1, "sa\n", 3);
		else
			write(1, "sb\n", 3);
	}
}

void	push(t_data *stack1, t_data *stack2, int control)
{
	if (stack1->size < 1)
		return ;
	stack2->array[stack2->size] = stack1->array[stack1->size - 1];
	stack2->size += 1;
	stack1->size -= 1;
	if (control == 0)
	{
		if (stack1->type == 'a')
			write(1, "pb\n", 3);
		else
			write(1, "pa\n", 3);
	}
}

void	rotate(t_data *stack, int control)
{
	int	i;
	int	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->array[stack->size - 1];
	i = -1;
	while (++i < stack->size -1)
	{
		stack->array[stack->size - i - 1] = stack->array[stack->size - i - 2];
	}
	stack->array[0] = tmp;
	if (control == 0)
	{
		if (stack->type == 'a')
			write(1, "ra\n", 3);
		else
			write(1, "rb\n", 3);
	}
}

void	rev_rotate(t_data *stack, int control)
{
	int	i;
	int	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->array[0];
	i = -1;
	while (++i < stack->size - 1)
	{
		stack->array[i] = stack->array[i + 1];
	}
	stack->array[stack->size - 1] = tmp;
	if (control == 0)
	{
		if (stack->type == 'a')
			write(1, "rra\n", 4);
		else
			write(1, "rrb\n", 4);
	}
}
