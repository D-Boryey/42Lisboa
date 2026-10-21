/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 20:01:02 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/14 13:53:06 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*
#include <unistd.h>
int main(void)
{
	char	str[] = "My name is Jose Mourinho";
	char	to_find[] = "is";
	int		i;
	char	*result;

	result = ft_strstr(str, to_find);
	i = 0;
	while (result[i])
	{
		write (1, &result[i], 1);
		i++;	
	}
	return (0);
}
*/