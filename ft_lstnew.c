/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 05:17:08 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/03 05:24:12 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->next = NULL;	
	new->content = (content) ? (void *)malloc(sizeof(content_size)) : NULL;
	if (new->content)
	{
		new->content = ft_memmove(new->content, content, content_size);
		new->content_size = content_size;
	}
	else
		new->content_size = 0;
	return (new);
}
