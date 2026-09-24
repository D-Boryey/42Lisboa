/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcoelho <vcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 19:26:26 by vcoelho           #+#    #+#             */
/*   Updated: 2026/09/06 18:01:26 by vcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print(int columns, char frst, char middle, char last)
{
	int	i;

	i = 1;
	while (i <= columns)
	{
		if (i == 1)
		{
			ft_putchar(frst);
		}
		else if (i == columns)
		{
			ft_putchar(last);
		}
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;
	int	lines;
	int	columns;

	if (x <= 0 || y <= 0)
		write (1, "Invalid\n", 8);
	i = 1;
	lines = y;
	columns = x;
	while (i <= lines)
	{
		if (i == 1)
		{
			print(columns, 'A', 'B', 'A');
		}
		else if (i == lines)
		{
			print(columns, 'C', 'B', 'C');
		}
		else
			print(columns, 'B', ' ', 'B');
		i++;
	}
}
