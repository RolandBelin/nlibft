/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:51:20 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/02 18:54:01 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	dst_len;
	size_t	index;

	dst_len = ft_strlen(dst);
	index = 0;
	while (src[index] && index < n)
	{
		dst[dst_len] = src[index];
		++dst_len;
		++index;
	}
	dst[dst_len] = '\0';
	return (dst);
}
