/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:06:57 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/27 11:12:51 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sinyal_gonder(int signum, unsigned char *msg)
{
	int	i;
	int	c;

	c = 0;
	i = 128;
	while (msg[c] != '\0')
	{
		while (i >= 1)
		{
			if (msg[c] / i)
			{
				kill(signum, SIGUSR1);
				msg[c] = msg[c] - i;
			}
			else
				kill(signum, SIGUSR2);
			usleep(100);
			i /= 2;
		}
		i = 128;
		c++;
	}
}

void	sinyal_yakala(int signum, siginfo_t *siginfo, void *unused)
{
	(void)signum;
	(void)siginfo;
	(void)unused;
	ft_putstr("Server Dönüş Sağladı!\n");
}

int	main(int arg, char **argc)
{
	struct sigaction	sinyal;
	int					p_id;

	sinyal.sa_flags = SA_SIGINFO;
	sinyal.sa_sigaction = sinyal_yakala;
	if ((sigaction(SIGUSR2, &sinyal, 0)) == -1)
		ft_putstr("Sinyal Gönderme Hatası\n");
	if (arg == 3)
	{
		p_id = ft_ascii_toint(argc[1]);
		sinyal_gonder(p_id, (unsigned char *)argc[2]);
	}
	while (1)
		pause();
	return (0);
}
