/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:56:02 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/18 17:25:36 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	box[BUFFER_SIZE + 1];
	char		*line;
	ssize_t		r_bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	r_bytes = 1;
	while (r_bytes > 0)
	{
		if (box[0])
		{
			line = ft_strjoin(line, box, ft_linelen(box));
			if (!line)
				return (NULL);
			ft_shift(box, ft_linelen(box));
		}
		if (ft_has_eol(line))
			return (line);
		r_bytes = read(fd, box, BUFFER_SIZE);
		if (r_bytes < 0)
			return (box[0] = '\0', free(line), NULL);
		box[r_bytes] = '\0';
	}
	return (line);
}
