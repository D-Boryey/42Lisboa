/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:46:02 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/05 14:48:27 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *c, int fd)
{
	int	i;

	i = 0;
	if (!c)
		return ;
	while (c[i])
	{
		write (fd, &c[i], 1);
		i++;
	}
}
