/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:15:56 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/12 18:46:07 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static void	ft_putnbr_digits(long n, char *base, int size, int *counter)
{
	char	buf[32];
	int		i;

	i = 0;
	while (n > 0)
	{
		buf[i] = base[n % size];
		n = n / size;
		i++;
	}
	while (i >= 0)
	{
		ft_putchar(buf[i], counter);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base, int *counter)
{
	long	n;

	n = nbr;
	if (n == 0)
		ft_putchar('0', counter);
	if (n < 0)
	{
		ft_putchar('-', counter);
		n *= -1;
	}
	if (n > 0)
		ft_putnbr_digits(n, base, ft_strlen(base), counter);
}

void	ft_putnbr_base_unsigned(unsigned long n, char *base, int *counter)
{
	char	buf[64];
	int		size;
	int		i;

	size = ft_strlen(base);
	if (n == 0)
	{
		ft_putchar('0', counter);
		return ;
	}
	i = 0;
	while (n > 0)
	{
		buf[i] = base[n % size];
		n = n / size;
		i++;
	}
	while (i >= 0)
	{
		ft_putchar(buf[i], counter);
		i--;
	}
}
