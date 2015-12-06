/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:19:04 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/02 20:02:04 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	char		neg;
	unsigned int	i;
	int		ret;

	i = 0;
	ret = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		++i;
	if (str[i] == '-' || str[i] == '+')
	{
		neg = (str[i] == '-') ? 1 : 0;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = (ret * 10) + (str[i] - '0');
		++i;
	}
	return ((neg) ? -ret : ret);
}
