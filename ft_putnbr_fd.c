/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 22:35:51 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/03 01:36:08 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	char	*nbr;

	if ((nbr = ft_itoa(n)))
	{
		write(fd, nbr, ft_strlen(nbr));
		ft_strdel(&nbr);
	}
}
