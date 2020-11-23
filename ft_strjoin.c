/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:22:31 by agraton           #+#    #+#             */
/*   Updated: 2020/11/23 12:22:33 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	o;
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	if (!(newstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	i = -1;
	while (s1[++i])
		newstr[i] = s1[i];
	o = -1;
	while (s2[++o])
		newstr[i + o] = s2[o];
	newstr[i + o] = 0;
	return (newstr);
}
