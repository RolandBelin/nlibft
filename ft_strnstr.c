/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 19:11:10 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/02 20:02:24 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	index;

	index = 0;
	s1_len = ((s1) ? ft_strlen(s1) : 0);
	s2_len = ((s2) ? ft_strlen(s2) : 0);
	if (!s2_len)
		return ((char *)s1);
	while (index + s2_len < n && index + s2_len < s1_len)
	{
		if (s1[index] == s2[0] && !ft_strncmp(s1, s2, s2_len))
			return ((char *)s1 + index);
		++index;
	}
	return (NULL);
}
