/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:18:32 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/19 18:41:05 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*yeni;

	yeni = (t_list *)malloc(sizeof(t_list));
	if (!yeni)
		return (NULL);
	yeni->content = content;
	yeni->next = NULL;
	return (yeni);
}
/*
int	main(void)
{
	t_list	*sonuc;
	char	src[] = "tarik yildirim";
	sonuc = ft_lstnew(src);
	printf("Değer: %s", sonuc->content);
}*/
