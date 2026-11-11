/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:55:29 by dboryey           #+#    #+#             */
/*   Updated: 2026/11/11 17:11:55 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		ft_has_eol(const char *box, char c);
char	*ft_merge(char *box, const char *buf, ssize_t len);
char	*ft_get_line(const char *box);
char	*ft_update_box(char *box);
ssize_t	ft_read_box(int fd, char *buf, char **box);

#endif

