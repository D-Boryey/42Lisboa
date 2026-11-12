/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:35:32 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/12 18:42:03 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		counter;

	va_start(arg, s);
	counter = 0;
	while (*s)
	{
		if (*s == '%')
		{
			ft_dispatcher(s[1], &arg, &counter);
			s += 2;
		}
		else
		{
			ft_putchar(*s, &counter);
			s++;
		}
	}
	va_end(arg);
	return (counter);
}
