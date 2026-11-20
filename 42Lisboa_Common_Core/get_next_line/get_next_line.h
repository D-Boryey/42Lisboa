/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:56:04 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/20 13:56:13 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>

size_t	ft_len(char *s, char c);
int		ft_has_eol(char *s);
char	*ft_strjoin(char *line, char *box, size_t len);
void	ft_shift(char *box, size_t start);
char	*get_next_line(int fd);

#endif
