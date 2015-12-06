/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 04:21:29 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/03 04:25:57 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(const char *str, size_t n)
{
	char	*ret;
	size_t	i;

	i = 0;
	if ((ret = (char *)malloc(sizeof(char) * (n + 1))))
	{
		while (str[i] && i < n)
		{
			ret[i] = str[i];
			++i;
		}
		while (i < n)
		{
			ret[i] = '\0';
			++i;
		}
		ret[i] = '\0';
	}
	return (ret);
}
