/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:21:38 by agraton           #+#    #+#             */
/*   Updated: 2021/03/11 10:41:59 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr_fd(char *s, int fd)
{
	if (fd < 0 || fd > OPEN_MAX)
		return ;
	if (s)
		write(fd, s, ft_strlen(s));
	else
		write(fd, "(NULL)", 6);
}
