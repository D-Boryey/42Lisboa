#include "get_next_line.h"
#include <unistd.h>

char *get_next_line(int fd)
{
	static char	*box;
	char		*line;
	char		*buf;
	ssize_t 	r_bytes;
	size_t		box_len;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	while(!ft_has_eol(box, '\n'))
	{
		r_bytes = read(fd, box, BUFFER_SIZE);
		
		box_len += 4;
	}
}