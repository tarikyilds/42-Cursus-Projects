/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:07:31 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/27 11:17:21 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include<unistd.h>
# include<signal.h>
# include<stdlib.h>

void	ft_putchar(int c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_ascii_toint(char *str);
#endif
