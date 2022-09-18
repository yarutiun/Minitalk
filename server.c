/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:55:49 by yarutiun          #+#    #+#             */
/*   Updated: 2022/09/01 14:43:54 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/server.h"

void	filling_char(int a)
{
	static int	i;
	static char	letter;

	if (i < 8)
	{
		letter = letter + (a << i);
		i ++;
	}
	if (i == 8)
	{
		ft_printf("%c", letter);
		i = 0;
		letter = 0;
	}
}

void	sighandler(int got_byte)
{
	if (got_byte == SIGUSR1)
		filling_char(1);
	else if (got_byte == SIGUSR2)
		filling_char(0);
}

int	main(void)
{
	int		pid;
	char	slash;

	slash = 10;
	pid = getpid();
	ft_printf("%i", pid);
	signal(SIGUSR2, sighandler);
	signal(SIGUSR1, sighandler);
	write(1, &slash, 1);
	while (1)
	{
		sleep(1);
	}
	return (0);
}
