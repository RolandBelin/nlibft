/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrplstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 23:52:48 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/03 04:02:33 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_rplcount(const char *format, const char *s1)
{
	size_t	s1_len;
	size_t	count;
	char	*data;

	count = 0;
	s1_len = ft_strlen(s1);
	data = (char *)format;
	while ((data = ft_strstr(data, s1)))
	{
		data += s1_len;
		++count;
	}
	return (count);
}

static size_t	*ft_rpldata(const char *f, const char *s1, const char *s2)
{
	size_t	*data;
	size_t	count;

	count = 0;
	if ((data = (size_t *)malloc(sizeof(size_t) * 5)))
	{
		data[0] = (f) ? ft_strlen(f) : 0;
		data[1] = (s1) ? ft_strlen(s1) : 0;
		data[2] = (s2) ? ft_strlen(s2) : 0;
		data[3] = (data[0] && data[1]) ? ft_rplcount(f, s1) : 0;
		count = data[3];
		if (data[0] && data[1] && data[3])
		{
			data[4] = data[0];
			while (--count)
				data[0] = ((data[0] - data[1]) + data[2]);
		}
	}
	return (data);
}

static char	*ft_while(const char *str, size_t *data, const char *s1, const char *s2)
{
	char	*ret;
	char	*new;

	if (!(new = (char *)malloc(sizeof(char) * (data[4] + 1))))
		return (NULL);
	ret = new;
	while (*str)
	{
		if (ft_strnequ(str, s1, data[1]))
		{
			str += data[1];
			if (data[2])
				new = ft_strcpy(new, s2);
			new += data[2];
		}
		else
		{
			*new = *str;
			++new;
			++str;
		}
	}
	*new = '\0';
	return (ret);
}

char		*ft_strrplstr(const char *str, const char *s1, const char *s2)
{
	size_t	*data;
	char	*ret;

	ret = NULL;
	if ((data = ft_rpldata(str, s1, s2)))
	{
		if (!data[1] || !data[0] || !data[3])
			ret = (((data[0]) ? ft_strdup(str) : NULL));
		else
			ret = ft_while(str, data, s1, s2);
	}
	else
		return (NULL);
	free(data);
	data = NULL;
	return (ret);
}
