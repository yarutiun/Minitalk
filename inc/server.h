/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarutiun <yarutiun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:23:35 by yarutiun          #+#    #+#             */
/*   Updated: 2022/09/01 14:46:00 by yarutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

# include "../libftprintf/inc/ft_printf.h"
# include "../libftprintf/inc/libft.h"
# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

void	sighandler(int got_byte);
void	filling_char(int a);

#endif