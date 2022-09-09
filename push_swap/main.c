/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <tyildiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:14:20 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/08 03:30:27 by tyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	a_stack;
	t_data	b_stack;

	a_stack.type = 'a';
	b_stack.type = 'b';
	if (ac >= 2)
		assign_to_stack(ac, av, &a_stack, &b_stack);
	else
		return (0);
	check_again(&a_stack, &b_stack);
	check_in_line(&a_stack, &b_stack);
	indexing(&a_stack);
	if (a_stack.size <= 5)
		sort_smaller_list(&a_stack, &b_stack);
	else
		sort_list(&a_stack, &b_stack);
	free(a_stack.array);
	free(b_stack.array);
}
