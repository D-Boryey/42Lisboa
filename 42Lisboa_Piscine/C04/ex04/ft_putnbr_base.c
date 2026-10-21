/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 15:22:50 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/13 20:44:40 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+'
			|| base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	box[32];
	long	n;
	int		size;
	int		i;

	if (!ft_base_check(base))
		return ;
	size = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
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
		ft_putchar(box[i]);
	}
}

/*
int main(void)
{
	int n = 123456789;
	char	*bin = "01";
	char	*oct = "01234567";
	char	*dec = "0123456789";
	char	*hex = "0123456789abcdef";

	write (1, "123456789 in Binary: ", 21);
	ft_putnbr_base(n, bin);
	write (1, "\n", 1);

	write (1, "123456789 in Octal: ", 20);
	ft_putnbr_base(n, oct);
	write (1, "\n", 1);

	write (1, "123456789 in Decimal: ", 22);
	ft_putnbr_base(n, dec);
	write (1, "\n", 1);

	write (1, "123456789 in Hexadecimal: ", 26);
	ft_putnbr_base(n, hex);
	write (1, "\n", 1);
}
*/