/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:30:01 by eelmoham          #+#    #+#             */
/*   Updated: 2022/01/10 19:13:59 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"
#include "../libft/libft.h"

t_data	g_sdata;

static void	send_sig(int resent, int pid)
{
	if (resent)
	{
		kill(pid, SIGUSR1);
		g_sdata.resent = 0;
	}
}

static void	receive(int sig, siginfo_t *siginf, void *arg)
{
	static pid_t	old_id = 0;

	(void)arg;
	if (old_id && old_id != siginf->si_pid)
	{
		g_sdata.c = 0;
		g_sdata.pos = 0;
	}
	if (sig == SIGUSR1)
		g_sdata.c |= 1 << g_sdata.pos;
	g_sdata.pos++;
	if (g_sdata.pos == 8)
	{
		g_sdata.pos = 0;
		if (!g_sdata.c)
		{
			ft_putchar_fd('\n', 1);
			g_sdata.resent = 1;
		}
		else
			ft_putchar_fd(g_sdata.c, 1);
		g_sdata.c = 0;
	}
	old_id = siginf->si_pid;
	send_sig(g_sdata.resent, old_id);
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = receive;
	sa.sa_flags = SA_RESTART;
	g_sdata.c = 0;
	g_sdata.pos = 0;
	g_sdata.resent = 0;
	ft_putstr_fd("PID     : ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	sigaction(SIGUSR2, &sa, NULL);
	sigaction(SIGUSR1, &sa, NULL);
	while (1)
		usleep(500);
	return (0);
}
