/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:24:25 by agraton           #+#    #+#             */
/*   Updated: 2020/11/23 12:46:27 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	newsize;
	size_t	i;
	size_t	o;
	char	*newstr;

	if (!s1 || !set)
		return (NULL);
	newsize = ft_strlen(s1) - 1;
	while (ft_ispartofset(s1[newsize], set) && newsize)
		newsize--;
	if (!newsize && ft_ispartofset(*s1, set))
		return (ft_calloc(1, 1));
	i = 0;
	while (ft_ispartofset(s1[i], set))
		i++;
	if (!(newstr = malloc(sizeof(char) * (newsize + 2 - i))))
		return (NULL);
	o = -1;
	while (++o + i < newsize + 1)
		newstr[o] = s1[o + i];
	newstr[o] = 0;
	return (newstr);
}
