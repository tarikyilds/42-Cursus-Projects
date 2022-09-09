/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:40:01 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/07 11:45:45 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	char	a;
	char	b;

	a = 'a';
	b = 'G';
	a = ft_tolower(a);
	b = ft_tolower(b);
	printf("Değerler: %c - %c", a, b);
}*/
