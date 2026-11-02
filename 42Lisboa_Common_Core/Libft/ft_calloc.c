/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:52:54 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/02 14:49:36 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dest;
	size_t	total;
	size_t	max;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	max = __SIZE_MAX__;
	if (size > max / nmemb)
		return (NULL);
	total = nmemb * size;
	dest = malloc(total);
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, total);
	return (dest);
}
