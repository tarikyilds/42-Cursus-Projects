/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:57:56 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/19 21:08:51 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*sonuc;
	char	srcone[] = "Tarik";
	char	srctwo[] = "Yildirim";
	char	srcthr[] = "Son Eleman";
	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (0);
	lst->content = ft_lstnew(srcone);
	lst->next = ft_lstnew(srctwo);
	lst->next->next = ft_lstnew(srcone);
	lst->next->next->next = ft_lstnew(srcthr);
	sonuc = ft_lstlast(lst);
	printf("Son Eleman: %s", sonuc->content);
}*/
