/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:11:49 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/07 12:29:22 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/*
#include<stdio.h>
int	main(void)
{
	char	*dizi;
	size_t	len;

	dizi = "tarik yildirim";
	len = ft_strlen(dizi);
	printf("Len: %zu", len);
}*/
