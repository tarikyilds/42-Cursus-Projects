/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:15:57 by tyildiri          #+#    #+#             */
/*   Updated: 2022/09/08 03:16:01 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "Libft/libft.h"

typedef struct s_data
{
	int		*array;
	int		size;
	char	type;
}	t_data;

size_t	number_size(char const *av);
char	*substrr(char const *s, unsigned int start, size_t len);
int		atoii(const char *av, t_data *a_stack, t_data *b_stack);
size_t	splitt(char *av, t_data *a, t_data *b, size_t a_i);
void	assign_to_stack(int ac, char **av, t_data *a_stack, t_data *b_stack);

void	check_again(t_data *a, t_data *b);
void	check_in_line(t_data *a, t_data *b);
int		check_in_line2(t_data *a);

void	ft_sort(int *sort, t_data *a);
void	indexing(t_data *a);

void	swap(t_data *stack, int control);
void	push(t_data *stack1, t_data *stack2, int control);
void	rotate(t_data *stack, int control);
void	rev_rotate(t_data *stack, int control);
void	swap_together(t_data *stack1, t_data *stack2, int control);
void	rotate_together(t_data *stack1, t_data *stack2, int control);
void	rev_rotate_together(t_data *stack1, t_data *stack2, int control);

void	triple_list(t_data *a);
void	quartet_list(t_data *a, t_data *b);
void	quintuple_list(t_data *a, t_data *b);
void	sort_smaller_list(t_data *a, t_data *b);

int		bit_count(t_data *a_stack);
void	sort_list3(t_data *a, t_data *b, int bit, int bit_size);
void	sort_list2(t_data *a, t_data *b, int bit);
void	sort_list(t_data *a, t_data *b);

void	error_mes(t_data *a, t_data *b);
void	error_mes2(t_data *a, t_data *b);

#endif
