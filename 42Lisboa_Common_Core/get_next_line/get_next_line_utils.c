/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:55:27 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/11 17:11:38 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_has_eol(const char *box, char c)
{
	int	i;

	i = 0;
	if (!box)
		return (0);
	while (box[i])
	{
		if (box[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_merge(char *box, const char *buf, ssize_t len)
{
	char	*new_box;
	return (new_box);
}

char	*ft_get_line(const char *box)
{
	char	*line;
	return (line);
}

char	*ft_update_box(char *box)
{
	return (box);
}

ssize_t	ft_read_box(int fd, char *buf, char **box)
{
	ssize_t	n;
	return (n);
}

