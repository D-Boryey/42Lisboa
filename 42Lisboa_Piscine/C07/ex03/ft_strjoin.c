/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:05:59 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/23 19:13:08 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	total_len(int size, char **strs, char *sep)
{
	int	total;
	int	str_len;
	int	i;

	if (size == 0)
		return (0);
	str_len = ft_strlen(sep);
	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += str_len * (size - 1);
	return (total);
}

void	ft_strs_cat(char *dest, char *part, int *pos)
{
	int	i;

	if (!part)
		return ;
	i = 0;
	while (part[i])
	{
		dest[*pos] = part[i];
		(*pos)++;
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		pos;
	int		i;

	if (size < 0 || (size > 0 && !strs))
		return (NULL);
	dest = malloc(total_len(size, strs, sep) + 1);
	if (!dest)
		return (NULL);
	pos = 0;
	i = 0;
	while (i < size)
	{
		ft_strs_cat(dest, strs[i], &pos);
		if (i < size - 1)
			ft_strs_cat(dest, sep, &pos);
		i++;
	}
	dest[pos] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*strs1[] = {"Hello", "Our", "Dear", "World"};
	char	*strs2[] = {"OnlyOneString"};
	char	*strs3[] = {"", "", ""};
	char	*result;

	result = ft_strjoin(4, strs1, "__");
	printf("%s\n", result);
	free(result);

	result = ft_strjoin(1, strs2, "+");
	printf("%s\n", result);
	free(result);

	result = ft_strjoin(3, strs3, "_-_");
	printf("%s\n", result);
	free(result);

	result = ft_strjoin(2, strs1, "");
	printf("%s\n", result);
	free(result);

	return (0);
}
*/