/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:23:25 by agraton           #+#    #+#             */
/*   Updated: 2020/11/23 12:54:27 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	char			*str;

	i = -1;
	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (++i < size)
		str[i] = f(i, s[i]);
	str[i] = 0;
	return (str);
}
