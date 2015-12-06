/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 19:38:36 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/02 19:44:23 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*c_dst;
	unsigned char	*c_src;
	
	c_dst = (unsigned char *)dst;
	c_src = (unsigned char *)src;
	if (dst > src)
	{
		while (n--)
			c_dst[n] = c_src[n];
	}
	else if (dst < src)
		dst = ft_memcpy(dst, src, n);
	return (dst);
}
