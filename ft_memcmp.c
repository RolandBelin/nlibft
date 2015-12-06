/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 19:34:06 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/02 19:59:57 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char 	*c_s1;
	const unsigned char	*c_s2;
	size_t			index;

	c_s1 = (const unsigned char *)s1;
	c_s2 = (const unsigned char *)s2;
	index = 0;
	while (index < n && c_s1[index] == c_s2[index])
		++index;
	return ((index < n) ? c_s1[index] - c_s2[index] : 0);
}
