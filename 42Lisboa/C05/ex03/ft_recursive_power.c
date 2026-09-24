/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:55:37 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/17 09:58:00 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, --power));
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_power(0,0));
	printf("%d\n", ft_recursive_power(5,-5));
	printf("%d\n", ft_recursive_power(2,6));
}
*/