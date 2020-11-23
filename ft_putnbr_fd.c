/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:21:23 by agraton           #+#    #+#             */
/*   Updated: 2020/11/23 12:53:18 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	const long int	b = (n < 0) ? -(long int)n : n;

	if (n < 0)
		write(fd, "-", 1);
	if (b >= 10)
		ft_putnbr_fd(b / 10, fd);
	ft_putchar_fd(b % 10 + '0', fd);
}
