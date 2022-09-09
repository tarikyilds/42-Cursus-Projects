/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:23:21 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/20 03:07:58 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	s_len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	s_len = ft_strlen(s1) + ft_strlen(s2);
	dest = (char *) malloc(sizeof(char) * s_len + 1);
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
		dest[i++] = s2[j++];
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	const char	s1[] = "Tarik ";
	const char	s2[] = "Yildirim";
	char	*sonuc;
	sonuc = ft_strjoin(s1, s2);
	printf("Değer: %s", sonuc);
}*/
