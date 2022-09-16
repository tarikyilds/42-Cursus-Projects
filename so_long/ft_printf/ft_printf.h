/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:39:52 by tyildiri          #+#    #+#             */
/*   Updated: 2022/02/16 01:02:30 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>
# include<limits.h>

int	ft_printchar(char c);
int	format(char c, va_list arg);
int	ft_printf(const char *str, ...);
int	ft_printstr(const char *str);
int	ft_printpointer(unsigned long int n);
int	ft_printnbr(int nb);
int	ft_printunbr(unsigned int nb);
int	ft_printhex(char c, unsigned int sayi);

#endif
