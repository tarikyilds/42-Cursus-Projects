/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:48:58 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/10 18:11:39 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
	{
		if (s[len] == (unsigned char) c)
			return ((char *) &s[len]);
		len++;
	}
	if ((unsigned char) c == '\0')
		return ((char *) &s[len]);
	return ((char *) NULL);
}
/*
int	main(void)
{
	const char dizi[] = "tarikyildirim";
	char aranan = 'l';
	char *sonuc;
	sonuc = ft_strchr(dizi, aranan);
	printf("Değer: %s", sonuc);
}*/
