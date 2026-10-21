/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:17:04 by dboryey           #+#    #+#             */
/*   Updated: 2026/10/20 17:01:29 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*dest;
	size_t	i;

	if (min >= max)
		return (NULL);
	dest = malloc((max - min) * sizeof(int));
	if (!dest)
		return (NULL);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}
