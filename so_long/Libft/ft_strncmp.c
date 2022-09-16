/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 23:48:46 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/07 11:44:39 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*
int	main(void)
{
	const char s1[] = "tarik";
	const char s2[] = "tarik";
	const char s3[] = "tabrik";
	size_t n = 4;
	int	sonuc1;
	int	sonuc2;
	sonuc1 = ft_strncmp(s1, s2, n);
	sonuc2 = ft_strncmp(s1, s3, n);
	printf("Sonuç 1: %d - Sonuç 2: %d", sonuc1, sonuc2);
}*/
