/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 19:36:18 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/02 22:49:44 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*c_s;
	size_t		index;

	index = 0;
	c_s = (unsigned char *)s;
	while (index < n)
	{
		c_s[index] = (unsigned char)c;
		++index;
	}
	return (s);
}
