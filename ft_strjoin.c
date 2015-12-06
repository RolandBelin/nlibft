/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 22:52:14 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/02 23:00:38 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{

	char	*ret;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ((s1) ? ft_strlen(s1) : 0);
	s2_len = ((s2) ? ft_strlen(s2) : 0);
	if (!s1_len && !s2_len)
		ret = NULL;
	else if (!s1_len || !s2_len)
		ret = ft_strdup((s1_len) ? s1 : s2);
	else if ((ret = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1))))
		ret = ft_strcat(ft_strcpy(ret, s1), s2);
	return (ret);
}
