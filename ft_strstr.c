/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 19:05:21 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/02 21:41:33 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t		s1_len;
	size_t		s2_len;	
	size_t		index;

	if ((s2_len = ft_strlen(s2)) <= (s1_len = ft_strlen(s1)) && !(index = 0))
	{
		if (!s2_len)
			return ((char *)s1);
		s1_len = (s1_len - s2_len) + 1;
		while (index < s1_len)
		{
			if (!ft_strncmp(s1 + index, s2, s2_len))
				return ((char *)s1 + index);
			index++;
		}
	}
	return (NULL);
}
