/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 23:13:21 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/10 23:36:22 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *aranan, size_t len)
{
	size_t	i;
	size_t	j;

	if (aranan[0] == '\0')
		return ((char *)str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && str[i + j] == aranan[j])
		{
			if (aranan[j + 1] == '\0')
				return ((char *) &str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "tarikyildirim";
	const char	aranan[] = "kyil";
	size_t		len = 8;
	char		*sonuc;
	sonuc = ft_strnstr(str, aranan, len);
	printf("Değer: %s", sonuc);
}*/
