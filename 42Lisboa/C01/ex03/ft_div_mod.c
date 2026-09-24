/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 12:49:27 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/08 12:01:22 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (div == NULL || mod == NULL || b == 0)
		return ;
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a = 45;
	int b = 10;
	int d = 0;
	int m = 0;
	int *div = &d;
	int *mod = &m;

	if (div == NULL || mod == NULL || b == 0)
		return (0);
	ft_div_mod(a, b, div, mod);
	printf("%d\n",*div);
	printf("%d\n",*mod);
	return (0);
}
*/