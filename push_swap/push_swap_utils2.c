/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:15:21 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/08 03:15:24 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_together(t_data *stack1, t_data *stack2, int control)
{
	if (control == 0)
	{
		swap(stack1, 1);
		swap(stack2, 1);
		write(1, "ss\n", 3);
	}
}

void	rotate_together(t_data *stack1, t_data *stack2, int control)
{
	if (control == 0)
	{
		rotate(stack1, 1);
		rotate(stack2, 1);
		write(1, "rr\n", 3);
	}
}

void	rev_rotate_together(t_data *stack1, t_data *stack2, int control)
{
	if (control == 0)
	{
		rev_rotate(stack1, 1);
		rev_rotate(stack2, 1);
		write(1, "rrr\n", 4);
	}
}
