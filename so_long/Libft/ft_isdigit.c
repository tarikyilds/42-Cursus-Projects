/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:04:43 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/07 11:36:41 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = ft_isdigit('0');
	b = ft_isdigit('9');
	c = ft_isdigit('A');
	printf("Değerler: %d - %d - %d", a, b, c);
	return (0);
}*/
