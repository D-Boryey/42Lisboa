/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:56:04 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/18 18:38:12 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(char *s);
size_t	ft_linelen(char *s);
int		ft_has_eol(char *s);
char	*ft_strjoin(char *line, char *box, size_t len);
void	ft_shift(char *box, size_t start);
char	*get_next_line(int fd);

#endif
