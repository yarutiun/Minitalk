/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:55:47 by yarutiun          #+#    #+#             */
/*   Updated: 2022/09/01 14:42:00 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/client.h"

static void	killing_the_char(int pid, char c)
{
	int		j;
	char	temp;

	j = 0;
	temp = c;
	while (j < 8)
	{
		if ((temp & 1) == 1)
		{
			kill(pid, SIGUSR1);
			usleep(50);
		}
		if ((temp & 1) == 0)
		{
			kill(pid, SIGUSR2);
			usleep(50);
		}
		temp = temp >> 1;
		j++;
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*string;
	int		i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		string = argv[2];
		if (kill(pid, 0) != 0)
		{
			ft_printf("unvalid pid");
			return (0);
		}
		while (string[i])
		{
			killing_the_char(pid, string[i]);
			i++;
		}
	}
	else
	{
		ft_printf("Something definetely went wrong(");
	}
	return (0);
}
