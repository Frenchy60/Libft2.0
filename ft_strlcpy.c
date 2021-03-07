/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:54:06 by agraton           #+#    #+#             */
/*   Updated: 2021/03/05 13:19:39 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = -1;
	if (!dstsize)
		return (ft_strlen(src));
	if (!dst || !src)
		return (0);
	while (++i < dstsize - 1 && src[i])
		dst[i] = src[i];
	if (dstsize)
		dst[i] = 0;
	return (ft_strlen(src));
}
