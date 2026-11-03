/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:15:56 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/03 15:36:57 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int nbr, char *base, int *count)
{
	char	box[32];
	long	n;
	int		size;
	int		i;

	size = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-', count);
		n *= -1;
	}
	i = 0;
	while (n > 0)
	{
		box[i] = base[n % size];
		n = n / size;
		i++;
	}
	while (--i >= 0)
	{
		ft_putchar(box[i], count);
	}
}
