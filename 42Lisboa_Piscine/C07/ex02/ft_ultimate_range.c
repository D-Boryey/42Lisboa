/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:05:59 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/20 14:48:26 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		nbrs;
	int		i;

	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	nbrs = max - min;
	*range = malloc(nbrs * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}

/*
int	main(void)
{
	int	*range;
	int max;
	int min;
	int	size;
	int	i;

	size = ft_ultimate_range(&range, min, max);
	printf("size = %d\n", size);
	if (range)
	{
		i = 0;
		while (i < size)
		{
			printf("%d ", range[i]);
			i++;
		}
		printf("\n");
		free(range);
	}
	return (0);
}
*/
