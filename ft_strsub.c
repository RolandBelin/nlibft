/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 23:01:40 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/02 23:07:51 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(const char *str, unsigned int start, size_t len)
{
	size_t	i_ret;
	size_t	i_str;
	char	*ret;

	i_str = start;
	i_ret = 0;
	if ((ret = (char *)malloc(sizeof(char) * (len + 1))))
	{
		while (i_ret < len)
		{
			ret[i_ret] = str[i_str];
			i_ret++;
			i_str++;
		}
		ret[i_ret] = '\0';
	}
	return (ret);
}
