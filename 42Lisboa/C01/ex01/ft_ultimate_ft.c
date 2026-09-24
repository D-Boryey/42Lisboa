/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 11:52:51 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/08 12:01:05 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	if (nbr == NULL || *nbr == NULL || **nbr == NULL)
		return ;
	if (***nbr == NULL || ****nbr == NULL || *****nbr == NULL)
		return ;
	if (******nbr == NULL || *******nbr == NULL || ********nbr == NULL)
		return ;
	*********nbr = 42;
}
/*
int main(void)
{
	int n = 1000000000;
	int *nbr1 = &n;
	int **nbr2 = &nbr1;
	int ***nbr3 = &nbr2;
	int ****nbr4 = &nbr3;
	int *****nbr5 = &nbr4;
	int ******nbr6 = &nbr5;
	int *******nbr7 = &nbr6;
	int ********nbr8 = &nbr7;
	int *********nbr9 = &nbr8;
	if (nbr1 == NULL || nbr2 == NULL)
		return (0);
	if (nbr3 == NULL || nbr4 == NULL || nbr5 == NULL)
		return (0);
	if (nbr6 == NULL || nbr7 == NULL || nbr8 == NULL)
		return (0);
	printf("%d\n", *********nbr9);
	ft_ultimate_ft(nbr9);
	printf("%d\n",*********nbr9);
	return (0);
}
*/