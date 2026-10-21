/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 15:47:20 by dboryey           #+#    #+#             */
/*   Updated: 2026/09/08 12:01:43 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = ("Hello World!");
	int	length;

	if (str == NULL)
		return (0);
	length = ft_strlen(str);
	printf("%d\n", length);
	return (0);
}
*/