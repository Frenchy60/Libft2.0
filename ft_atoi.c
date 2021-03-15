/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:16:53 by agraton           #+#    #+#             */
/*   Updated: 2021/03/11 10:39:31 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int			ft_atoi(const char *str)
{
	int				i;
	int				neg;
	long long		ans;

	i = 0;
	while (ft_isspace(str[0]))
		str++;
	neg = 1;
	if (str[0] == '+' || str[0] == '-')
		if ((str++)[0] == '-')
			neg = (neg == 1) ? -1 : 1;
	ans = 0;
	while (ft_isdigit(str[i]))
		ans = ans * 10 + (str[i++] - '0');
	if (i <= 19 && ans <= LLONG_MAX)
		return (ans * neg);
	return ((neg == -1) ? 0 : -1);
}
