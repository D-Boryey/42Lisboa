#include "get_next_line.h"

char	*ft_has_eol(char *box, char c)
{
	int	i;

	i = 0;
	while (box[i])
	{
		if (box[i] == c)
			return ((char *)&box[i]);
		i++;
	}
	return (NULL);
}

char	*ft_merge(char *box, char const *buf, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new_box;

	if (!box || !buf)
		return (NULL);
	box = malloc((len + 1) * sizeof(char));
	if (!new_box)
		return (NULL);
	i = 0;
	j = 0;
	while (box[i])
	{
		new_box[i] = box[i];
		i++;
	}
	while (buf[j])
	{
		new_box[i + j] = buf[j];
		j++;
	}
	new_box[i + j] = '\0';
	return (new_box);
}