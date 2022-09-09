/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:41:03 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/11 14:18:22 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
char	kucultme(unsigned int i, char c)
{
	(void)i;
	if (c >= 65 && c <= 90)
		c = c + 32;
	return c;
}

int	main(void)
{
	char	str[] = "TarikYlDiRim";
	char 	*sonuc;
	sonuc = ft_strmapi(str, kucultme);
	printf("Değer: %s", sonuc);
}*/
