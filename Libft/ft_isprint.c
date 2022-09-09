/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:41:47 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/07 11:39:47 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}
/*
int	main(void)
{
	char	c = 'A';
	int	sonuc;

	sonuc = ft_isprint(c);
	printf("Değer: %d", sonuc);
}*/
