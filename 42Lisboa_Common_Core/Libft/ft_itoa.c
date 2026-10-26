/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 09:51:44 by dboryey           #+#    #+#             */
/*   Updated: 2026/10/26 12:22:29 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbr_len(long nbr)
{
	size_t	len;

	if (nbr < 0)
	{
		len = 2;
		nbr *= -1;
	}
	else
		len = 1;
	while (nbr > 9)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nbr;
	size_t		len;

	nbr = n;
	len = nbr_len(nbr);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 9)
	{
		len--;
		str[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	str[len - 1] = nbr + '0';
	return (str);
}
