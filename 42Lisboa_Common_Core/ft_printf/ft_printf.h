/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:37:54 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/07 13:27:11 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

void	ft_dispatcher(char format, va_list *arg, int *counter);
int		ft_printf(const char *s, ...);
void	ft_putchar(char c, int *counter);
void	ft_putstr(char *c, int *counter);
void	ft_putnbr_base(int n, char *base, int *counter);
void	ft_putnbr_base_unsigned(unsigned long n, char *base, int *counter);

#endif