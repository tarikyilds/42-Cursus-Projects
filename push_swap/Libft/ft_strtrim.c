/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:47:11 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/11 01:52:24 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
	{
		end--;
	}
	dest = ft_substr ((char *)s1, 0, end + 1);
	return (dest);
}
/*
int	main(void)
{
	const char	src[] = "mmttarikyildirimmmt";
	const char	set[] = "mmt";
	char	*sonuc;
	sonuc = ft_strtrim(src, set);
	printf("Değer: %s", sonuc);
}*/
