/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 12:01:01 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/08 12:00:52 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	if (nbr == NULL)
		return ;
	*nbr = 42;
}
/*
int main(void)
{
	int n = 12345;
	int *nbr = &n;
	if (nbr == NULL)
		return (0);
	printf("%d\n", *nbr);
	ft_ft(nbr);
	printf("%d\n", *nbr);
	return (0);
}	
*/