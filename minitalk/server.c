/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:07:53 by tyildiri          #+#    #+#             */
/*   Updated: 2022/05/27 11:16:15 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	sinyal_yakala(int signum, siginfo_t *siginfo, void *gereksiz)
{
	static int	character = 0;
	static int	index = 7;
	int			c;

	(void)gereksiz;
	if (signum == SIGUSR1)
		c = 1;
	else
		c = 0;
	character += c << index;
	if (index == 0)
	{
		write(1, &character, 1);
		character = 0;
		index = 7;
		if (kill(siginfo->si_pid, SIGUSR2) == -1)
			ft_putstr("Sinyal Gönderme Hatası\n");
	}
	else
		index--;
}

int	main(void)
{
	struct sigaction	sinyal;

	ft_putstr("Process Identification: ");
	ft_putnbr(getpid());
	ft_putchar('\n');
	sinyal.sa_flags = SA_SIGINFO;
	sinyal.sa_sigaction = sinyal_yakala;
	if (sigaction(SIGUSR1, &sinyal, 0) == -1)
		ft_putstr("Sinyal Hatası!");
	if (sigaction(SIGUSR2, &sinyal, 0) == -1)
		ft_putstr("Sinyal Hatası!");
	while (1)
		pause();
	return (0);
}
