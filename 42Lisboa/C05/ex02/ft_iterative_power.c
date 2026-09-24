/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 10:43:19 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/17 09:57:52 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_power(0,0));
	printf("%d\n", ft_iterative_power(5,-5));
	printf("%d\n", ft_iterative_power(2,6));
}
*/