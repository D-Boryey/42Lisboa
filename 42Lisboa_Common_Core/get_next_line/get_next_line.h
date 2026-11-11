#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

#include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_has_eol(const char *s, char c);

#endif