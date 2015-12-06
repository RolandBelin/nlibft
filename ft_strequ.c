/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 22:19:08 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/03 05:11:50 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(const char *s1, const char *s2)
{
	unsigned int	index;

	index = 0;
	if (s1 && s2)
	{
		while (s1[index] && s2[index] && s1[index] == s2[index])
			++index;
		return ((s1[index] == s2[index] ? 1 : 0));
	}
	return ((s1 == s2) ? 1 : 0);
}
