/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:13:40 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/08 03:13:43 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_mes(t_data *a, t_data *b)
{
	write(1, "Error", 5);
	free(a->array);
	free(b->array);
	exit(0);
}

void	error_mes2(t_data *a, t_data *b)
{
	free(a->array);
	free(b->array);
	exit(0);
}
