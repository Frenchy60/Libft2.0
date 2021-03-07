/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:23:56 by agraton           #+#    #+#             */
/*   Updated: 2021/03/06 18:35:17 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	o;

	i = -1;
	if (!*little)
		return ((char *)big);
	while (++i < len && big[i])
	{
		o = 0;
		while (little[o] == big[i + o] && i + o < len && little[o])
			o++;
		if (!little[o])
			return (&((char *)big)[i]);
	}
	return (NULL);
}
