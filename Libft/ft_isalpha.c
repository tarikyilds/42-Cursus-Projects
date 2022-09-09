/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 12:56:15 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/07 11:35:53 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = ft_isalpha('A');
	b = ft_isalpha('z');
	c = ft_isalpha('2');
	printf("Değerler: %d - %d - %d", a, b, c);
	return (0);
}*/
