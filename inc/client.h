/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:23:03 by yarutiun          #+#    #+#             */
/*   Updated: 2022/09/01 14:45:27 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H

# include "../libftprintf/inc/ft_printf.h"
# include "../libftprintf/inc/libft.h"
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

static void	killing_the_char(int pid, char c);

#endif