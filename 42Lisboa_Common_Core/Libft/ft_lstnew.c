/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboryey <dboryey@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:26:51 by dboryey           #+#    #+#             */
/*   Updated: 2026/10/27 11:36:16 by dboryey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(node));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
