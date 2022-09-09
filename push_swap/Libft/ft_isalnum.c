/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:13:24 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/07 11:34:57 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int d;

	a = ft_isalnum('0');
	b = ft_isalnum('A');
	c = ft_isalnum('z');
	d = ft_isalnum('|');
	printf("Değerler: %d - %d - %d - %d", a, b, c, d);
	return (0);
}*/
