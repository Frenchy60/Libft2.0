/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:54:06 by agraton           #+#    #+#             */
/*   Updated: 2020/11/23 12:54:08 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = -1;
	if (!size)
		return (ft_strlen(src));
	if (!dst || !src)
		return (0);
	while (++i < size - 1 && src[i])
		dst[i] = src[i];
	if (size)
		dst[i] = 0;
	return (ft_strlen(src));
}
