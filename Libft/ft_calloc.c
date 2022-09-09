/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 10:12:04 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/07 11:50:53 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*src;

	src = malloc(count * size);
	if (src == NULL)
		return (src);
	ft_bzero(src, size * count);
	return (src);
}
/*
int	main(void)
{
	char	*src;

	src = ft_calloc(5 , 5);
	if (src == NULL)
		printf("NULL");
	else
		printf("NULL DEĞİL");
}*/
