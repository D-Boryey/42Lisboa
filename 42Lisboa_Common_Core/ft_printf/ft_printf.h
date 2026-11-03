/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:37:54 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/03 18:17:58 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

void	handler(void *s, char conv);

int		ft_printf(const char *, ...);
void	ft_putchar(char c, int *counter);
void	ft_putstr(char *c, int *counter);
int		ft_strlen(char *c);
void	ft_putnbr_base(int n, char *base, int *counter);

#endif