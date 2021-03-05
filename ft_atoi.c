/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:16:53 by agraton           #+#    #+#             */
/*   Updated: 2021/03/05 12:19:49 by agraton          ###   ########.fr       */
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
	while (ft_isspace(str[i]))
		i++;
	neg = 1;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			neg = (neg == 1) ? -1 : 1;
	ans = 0;
	while (ft_isdigit(str[i]))
		ans = ans * 10 + (str[i++] - '0');
	if (i <= 19 && ans <= LLONG_MAX)
		return (ans * neg);
	return ((neg == -1)? 0 : -1);
}
