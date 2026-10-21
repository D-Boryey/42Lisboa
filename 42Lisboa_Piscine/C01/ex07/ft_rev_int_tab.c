/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 16:22:17 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/08 18:30:15 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	if (tab == NULL)
		return ;
	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}
/*
int main(void)
{
	int	tab[10] = {0,1,2,3,4,5,6,7,8,9};
	int	size = 10;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	printf("\n");
	while (j < size)
	{
		printf("%d", tab[j]);
		j++;
	}
	printf("\n");
	return (0);
}
*/