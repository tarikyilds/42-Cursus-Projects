/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:58:58 by tyildiri          #+#    #+#             */
/*   Updated: 2022/01/10 18:27:07 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	pn;
	int	sonuc;

	i = 0;
	pn = 1;
	sonuc = 0;
	if (str[i] == '\0')
		return (0);
	while ((str[i] >= 0 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pn = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		sonuc = sonuc * 10;
		sonuc += (str[i] - 48);
		i++;
	}
	return (sonuc * pn);
}
/*
int	main(void)
{
	const char str[] = "  -1234(asD";
	int	sonuc;

	sonuc = ft_atoi(str);
	printf("Değer: %d", sonuc);
}*/
