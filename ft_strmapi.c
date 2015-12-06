/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 23:25:11 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/03 01:33:40 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char		*ret;

	i = 0;
	if (s && f && (ret = ft_strnew(ft_strlen(s))))
	{
		while (s[i])
		{
			ret[i] = f(i, s[i]);
			++i;
		}
	}
	else
		ret = (((!s && f) || !s) ? NULL : ft_strdup(s));
	return (ret);
}
