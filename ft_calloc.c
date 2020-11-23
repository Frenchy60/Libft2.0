/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:17:16 by agraton           #+#    #+#             */
/*   Updated: 2020/11/23 12:47:40 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t nmemb, size_t size)
{
	const size_t	sum = nmemb * size;
	void			*str;

	if (sum > 2147483647)
		return (NULL);
	if (!(str = malloc(sum)))
		return (NULL);
	ft_bzero(str, sum);
	return (str);
}
