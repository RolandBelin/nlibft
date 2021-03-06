/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 23:31:44 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/03 04:49:37 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_striter(char *str, void (*f)(char *))
{
	unsigned int	i;

	i = 0;
	if (!str || !f)
		return ;
	while (str[i])
	{
		f(&str[i]);
		++i;
	}
}
