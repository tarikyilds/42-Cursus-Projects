/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 00:13:49 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/10 17:07:22 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	src = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char) c)
			return (src + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *s = "tarik";
	char r = 'r';
	size_t n = 4;
	ft_memchr(s, r, n);
	printf("Değer: %s", s);
}*/
