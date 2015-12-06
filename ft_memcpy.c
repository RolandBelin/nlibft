/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 19:15:10 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/02 19:59:13 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*c_dst;
	const unsigned char	*c_src;
	size_t			index;

	index = 0;
	c_src = (const unsigned char *)src;
	c_dst = (unsigned char *)dst;
	while (index < n)
	{
		c_dst[index] = c_src[index];
		++index;
	}
	return (dst);
}
