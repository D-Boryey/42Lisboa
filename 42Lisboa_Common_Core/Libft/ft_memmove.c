/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:37:26 by dboryey           #+#    #+#             */
/*   Updated: 2026/10/21 19:36:57 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	if (!src && !dest)
		return (dest);
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (d < s)
		return (ft_memcpy(dest, src, n)); //sus solution for under 25 lines
	else
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (dest);
}

	// {
	// 	i = 0;
	// 	while (i < n)
	// 	{
	// 		d[i] = s[i];
	// 		i++;
	// 	}
	// }