/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_extra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:07:16 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/27 11:20:22 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		ft_putchar(str[index++]);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

int	ft_ascii_toint(char *str)
{
	int	index;
	int	num;

	index = 0;
	num = 0;
	while (str[index] != '\0')
	{
		num *= 10;
		num += str[index] - 48;
		index++;
	}
	return (num);
}
