/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:20:39 by agraton           #+#    #+#             */
/*   Updated: 2020/11/23 12:52:36 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memset(void *str, int c, size_t n)
{
	const char	c1 = (const char)c;
	char		*s;

	s = (char *)str;
	while (n-- > 0)
		s[n] = c1;
	return (str);
}
