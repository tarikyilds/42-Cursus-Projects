/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:19:01 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/19 19:55:31 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list	*lst;
	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (0);
	char	src[] = "tarik";
	char	deneme[] = "yilds";
	int		sonuc;
	lst = ft_lstnew(src);
	lst->next = ft_lstnew(deneme);
	lst->next->next = ft_lstnew("Penguen");
	sonuc = ft_lstsize(lst);
	printf("Değer: %d\n lastword = %s", sonuc, (char *)lst->next->next->content);
}*/
