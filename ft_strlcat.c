/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:55:04 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/02 20:58:56 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	index;
	size_t	rlen;
	size_t	dst_len;

	index = 0;
	dst_len = ((dst) ? (((dst_len = ft_strlen(dst)) > n) ? n : dst_len) : 0); 
	rlen = ((src) ? ft_strlen(src) : 0) + dst_len;
	if (dst)
	{
		while (src[index] && dst_len < n - 1)
		{
			dst[dst_len] = src[index];
			++dst_len;
			++index;
		}
		dst[dst_len] = '\0';
	}
	return (rlen);
}
