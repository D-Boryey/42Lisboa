/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:49:10 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/03 18:31:12 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handler(char *s, char conv)
{
	int	*counter;
	int	total;

	total = 0;
	counter = &total;
	if (conv == 'c')
		ft_putchar(s, counter);
}