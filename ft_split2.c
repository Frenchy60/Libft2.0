/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:15:23 by agraton           #+#    #+#             */
/*   Updated: 2021/03/05 10:57:03 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strdupc(char **s, char **source, char c)
{
	int		i;

	while (**source == c)
		(*source)++;
	i = 0;
	while (source[0][i] && source[0][i] != c)
		i++;
	if (!(*s = malloc(sizeof(char) * (i + 1))))
		return (0);
	i = -1;
	while (source[0][i] && source[0][i] != c)
		s[0][i] = source[0][i];
	s[0][i] = '\0';
	return (1);
}

char		**ft_freesplit(char **split, size_t i)
{
	while (i--)
		free(split[i]);
	free(split);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
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
	while (++i < size)
		if (!ft_strdupc(&(split[i]), &(split[size]), c))
			return (ft_freesplit(split, i));
	split[size] = NULL;
	return (split);
}
