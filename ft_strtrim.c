/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 23:08:04 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/04 11:04:38 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(const char *str)
{
	unsigned int	start;
	size_t		str_len;
	size_t		len;

	start = 0;
	str_len = ((str) ? ft_strlen(str) : 0);
	len = (str_len > 0) ? str_len - 1 : 0;
	if (!str || !len)
		return ((str) ? ft_strnew(0) : NULL);
	while (str[start] == ' ' || str[start] == '\t' || str[start] == '\n')
		++start;
	while ((str[len] == ' ' || str[len] == '\t' || str[len] == '\n') && len)
		--len;
	len = (len > start) ? len - start : 0;
	if (len && len + start <= str_len)
		return (ft_strsub(str, start, len + 1));
	else
		return (ft_strnew(0));
}
