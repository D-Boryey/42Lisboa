/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 14:50:17 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/08 12:01:31 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (a == NULL || b == NULL || *b == 0)
		return ;
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int main(void)
{
	int n1 = 10;
	int n2 = 3;
	int *a = &n1;
	int *b = &n2;

	if (a == NULL || b == NULL || *b == 0)
		return (0);
	ft_ultimate_div_mod(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
	return (0);
}
*/