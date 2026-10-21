/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 14:29:13 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/17 09:57:26 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}

/*
#include <stdio.h>
int main(void)
{
	int	nb = 5;
	int	result;
	
	result = ft_iterative_factorial(nb);
	printf("%d\n", result);
	return (0);
}
*/