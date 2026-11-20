/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:56:02 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/20 13:54:21 by dboryey          ###   ########.fr       */
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
			line = ft_strjoin(line, box, ft_len(box, '\n'));
			if (!line)
				return (NULL);
			ft_shift(box, ft_len(box, '\n'));
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

// #include <stdio.h>
// #include <fcntl.h>

// int main(int ac, char *av[])
// {
// 	(void)ac;
// 	int fd = open(av[1], O_RDONLY);
// 	char *line = get_next_line(fd);
// 	printf("%s", line);
// 	free(line);
//	close (fd);
// 	return (0);
// }

// int main(int ac, char *av[])
// {
// 	(void)ac;
// 	int fd = open(av[1], O_RDONLY);
// 	char *line = get_next_line(fd);
// 	while (line = get_next_line(fd))
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	close (fd);
// 	return (0);
// }