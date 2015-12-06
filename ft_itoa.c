/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 21:44:38 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/04 11:04:03 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

short		ft_intlen(int n)
{
	short	ret;

	ret = 1;
	if ((n < 0) && (n = -n) && ret++ && n < 0)
		return (-1);
	while ((n = n / 10))
		++ret;
	return (ret);
}

char		*ft_itoa(int n)
{
	short	len;
	char	*ret;

	ret = NULL;
	if ((len = ft_intlen(n)) > 0)
	{
		if ((ret = (char *)malloc(sizeof(char) * (len + 1))))
		{
			ret[len] = '\0';
			if (n < 0 && (n = -n) > 0)
				ret[0] = '-';
			while ((ret[--len] = (n % 10) + '0') && (n = n / 10))
				;
		}
	}
	else if (ret == NULL)
		ret = ft_strdup("-2147483648");
	return (ret);
}
