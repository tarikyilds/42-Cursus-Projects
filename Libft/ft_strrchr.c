/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 23:02:55 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/10 23:03:41 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;
	char	*p;

	index = 0;
	p = NULL;
	while (1)
	{
		if (s[index] == (char)c)
			p = (char *)(s + index);
		if (s[index] == '\0')
			break ;
		index++;
	}
	return (p);
}
