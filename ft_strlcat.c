/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:43:10 by agraton           #+#    #+#             */
/*   Updated: 2021/03/05 13:20:12 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;

	i = ft_strlen(dst);
	c = -1;
	if (dstsize < i + 1)
		return (ft_strlen(src) + dstsize);
	while (src[++c] && i + c + 1 < dstsize)
		dst[i + c] = src[c];
	if (dstsize > i)
		dst[i + c] = 0;
	return (i + ft_strlen(src));
}
