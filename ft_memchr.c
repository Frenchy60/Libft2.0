/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:19:42 by agraton           #+#    #+#             */
/*   Updated: 2021/03/06 10:50:30 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *str, int c, size_t n)
{
	char	*s;
	size_t	i;

	s = (char *)str;
	i = -1;
	while (++i < n)
		if (s[i] == (char)c)
			return ((void *)&(s[i]));
	return (NULL);
}
