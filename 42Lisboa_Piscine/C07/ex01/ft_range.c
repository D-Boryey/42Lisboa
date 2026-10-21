/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:05:57 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/19 14:37:20 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		*array;
	int		nbrs;
	int		i;

	if (min >= max)
		return (NULL);
	nbrs = max - min;
	array = malloc(nbrs * sizeof(int));
	if (!array)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/*
int main(void)
{
    int min = -10;
    int max = 11;
    int *array;
    int  i;

    array = ft_range(min, max);
    if (!array)
        return (1);
    i = 0;
    while (i < max - min)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
    free(array);
    return (0);
}
*/
