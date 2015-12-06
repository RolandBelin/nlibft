/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 19:27:51 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/02 20:18:18 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*c_s;
	size_t			index;

	index = 0;
	c_s = (const unsigned char *)s;
	while (index < n && c_s[index] != (unsigned char)c)
		++index;
	return((index < n) ? (void *)s + index : NULL);
}
