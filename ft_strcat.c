/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:50:00 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/02 19:58:22 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *dst, const char *str)
{
	size_t	dst_len;
	size_t	index;

	index = 0;
	dst_len = ft_strlen(dst);
	while (str[index])
	{
		dst[dst_len] = str[index];
		++index;
		++dst_len;
	}
	dst[dst_len] = '\0';
	return (dst);
}
