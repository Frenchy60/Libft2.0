/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:37:14 by agraton           #+#    #+#             */
/*   Updated: 2020/11/23 12:38:20 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s1;
	char	*s2;

	s1 = (char *)dest;
	s2 = (char *)src;
	if (!dest && !src)
		return (dest);
	while (n-- > 0)
		s1[n] = s2[n];
	return (dest);
}
