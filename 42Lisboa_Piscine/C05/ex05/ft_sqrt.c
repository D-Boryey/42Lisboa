/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:10:36 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/17 10:25:11 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_sqrt(36));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-25));
	printf("%d\n", ft_sqrt(121));
	printf("%d\n", ft_sqrt(81));
}
*/