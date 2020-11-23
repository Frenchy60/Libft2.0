/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:19:30 by agraton           #+#    #+#             */
/*   Updated: 2020/11/23 12:52:11 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (!n)
		return (NULL);
	i = -1;
	while (++i < n - 1 && s2[i] != (unsigned char)c)
		s1[i] = s2[i];
	if (n)
		s1[i] = s2[i];
	return ((s2[i] == c) ? (void *)&(s1[i + 1]) : NULL);
}
