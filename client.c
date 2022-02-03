/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:29:32 by eelmoham          #+#    #+#             */
/*   Updated: 2022/01/10 19:07:21 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//mandatory

#include "minitalk.h"
#include "../libft/libft.h"

static void	ft_tobin(char chr, int pidserv)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (chr % 2 == 1)
			kill(pidserv, SIGUSR1);
		if (chr % 2 == 0)
			kill(pidserv, SIGUSR2);
		chr = chr / 2;
		i++;
		usleep(200);
	}
}

static void	ft_send(char *str, int pidserv)
{
	int	i;

	i = 0;
	while (str[i])
		ft_tobin(str[i++], pidserv);
	ft_tobin(0, pidserv);
}

int	main(int ac, char **av)
{
	int	pidserv;

	if (ac != 3)
	{
		ft_putstr_fd("WRONG ARGUMENTS!", 1);
		return (1);
	}
	pidserv = ft_atoi(av[1]);
	if (!pidserv)
	{
		ft_putstr_fd("INVALID PID!", 1);
		return (1);
	}
	ft_send(av[2], pidserv);
	return (0);
}
