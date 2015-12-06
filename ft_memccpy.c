/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 19:17:38 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/02 20:20:03 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*c_dst;
	const unsigned char 	*c_src;
	size_t			index;

	index = 0;
	c_dst = (unsigned char *)dst;
	c_src = (const unsigned char *)src;
	while (index < n)
	{
		c_dst[index] = c_src[index];
		if (c_dst[index] == (unsigned char)c)
			return (dst + index + 1);
		++index;
	}
	return (NULL);
}
