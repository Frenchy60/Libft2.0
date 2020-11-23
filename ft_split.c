/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:44:34 by agraton           #+#    #+#             */
/*   Updated: 2020/11/23 12:44:49 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strdupc(char **dup, const char *s, char c)
{
	int		i;

	while (*s == c)
		s++;
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(*dup = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = -1;
	while (s[++i] && s[i] != c)
		dup[0][i] = s[i];
	dup[0][i] = '\0';
	return ((char *)s + i);
}

char			**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	o;
	size_t	size;

	if (!s)
		return (NULL);
	size = 0;
	i = 0;
	while (s[i++])
		if ((s[i] == c || !s[i]) && s[i - 1] != c)
			size++;
	if (!(split = malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	split[size] = (char *)s;
	i = -1;
	o = 0;
	while (++i < size)
		split[size] = ft_strdupc(&(split[i]), split[size], c);
	split[size] = NULL;
	return (split);
}
