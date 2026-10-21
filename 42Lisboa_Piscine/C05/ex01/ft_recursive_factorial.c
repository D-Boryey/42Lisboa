/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 18:07:27 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/17 09:57:40 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_factorial(-10));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(3));
	printf("%d\n", ft_recursive_factorial(5));
}
*/