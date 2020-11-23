/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:20:26 by agraton           #+#    #+#             */
/*   Updated: 2020/11/23 12:42:29 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)str1;
	s2 = (char *)str2;
	if (str1 == str2)
		return (str1);
	if (str1 < str2)
	{
		i = -1;
		while (++i < n && s2 + i != str1)
			s1[i] = s2[i];
	}
	else
		while (n-- > 0)
			s1[n] = s2[n];
	return (str1);
}
