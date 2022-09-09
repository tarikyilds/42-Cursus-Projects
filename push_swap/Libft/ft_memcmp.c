/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:41:13 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/07 11:41:27 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;
	size_t			i;

	src1 = (unsigned char *) s1;
	src2 = (unsigned char *) s2;
	i = 0;
	if (src1 == src2 || n == 0)
		return (0);
	while (i < n)
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char s1[] = "tarik";
	const char s2[] = "tarik";
	const char s3[] = "tabrik";
	size_t n = 4;
	int	sonuc1;
	int sonuc2;
	sonuc1 = ft_memcmp(s1, s2, n);
	sonuc2 = ft_memcmp(s1, s3, n);
	printf("Sonuç 1: %d - Sonuç 2: %d", sonuc1, sonuc2);
}*/
