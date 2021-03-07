/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:21:55 by agraton           #+#    #+#             */
/*   Updated: 2021/03/06 11:12:15 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	ch;

	ch = (char)c;
	i = 0;
	while (s[i] != ch && s[i])
		i++;
	if (s[i] == ch)
		return (((char *)s) + i);
	return (NULL);
}
