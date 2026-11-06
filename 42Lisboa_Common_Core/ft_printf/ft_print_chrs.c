/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:35:29 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/06 17:53:20 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *counter)
{
	write (1, &c, 1);
	(*counter)++;
	return ;
}

void	ft_putstr(char *c, int *counter)
{
	int	i;

	if (!c)
	{
		write (1, "(null)", 6);
		(*counter) += 6;
		return ;
	}
	i = 0;
	while (c[i])
	{
		write (1, &c[i], 1);
		i++;
		(*counter)++;
	}
	return ;
}
