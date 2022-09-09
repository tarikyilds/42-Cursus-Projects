/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 20:09:18 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/07 11:44:05 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (!dstsize)
		return (count);
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count);
}
/*
int	main(void)
{
	char dst[] = "tarik";
	const char src[] = "dddbbg";
	size_t size = 5;
	size_t sonuc;
	sonuc = ft_strlcpy(dst, src, size);
	printf("Değer: %zu", sonuc);
}*/
