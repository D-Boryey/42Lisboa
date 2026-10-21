/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 12:36:16 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/08 12:01:14 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	if (a == NULL || b == NULL)
		return ;
	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main(void)
{
	int n1 = 12345;
	int n2 = 54321;
	int *a = &n1;
	int *b = &n2;
	if (a == NULL || b == NULL)
		return (0);
	printf("%d\n",*a);
	ft_swap(a, b);
	printf("%d\n",*a);
	return (0);
}
*/