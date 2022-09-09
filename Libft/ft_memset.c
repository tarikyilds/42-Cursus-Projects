/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:01:18 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/07 11:42:23 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int			i;
	char		*dizi;

	dizi = (char *) b;
	i = 0;
	while (len > 0)
	{
		((unsigned char *)b)[i] = c;
		i++;
		len--;
	}
	return (b);
}
/*
int	main(void)
{
	char	dizi[] = "arikYildirim";
    ft_memset(dizi, 'z', 5);
	printf("Değer: %s", dizi);
}*/
