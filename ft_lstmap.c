/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 05:33:44 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/03 06:22:10 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first;
	t_list	*actual;
	t_list	*temp;

	temp = lst;
	actual = NULL;
	first = NULL;
	if (lst)
	{
		first = f(temp);
		actual = first;
		while (temp->next)
		{
			actual->next = f(temp->next);
			actual = actual->next;
			temp = temp->next;
		}
	}
	return (first);
}
