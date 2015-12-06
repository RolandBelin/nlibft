/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 05:28:18 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/03 05:31:51 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*temp2;

	temp = lst;
	temp2 = NULL;
	if (lst && f)
	{
		while (temp)
		{
			temp2 = temp->next;
			f(temp);
			temp = temp2;
		}
	}
}
