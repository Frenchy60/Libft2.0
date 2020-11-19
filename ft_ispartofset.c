#include "libft.h"

int		ft_ispartofset(const char c, const char *set)
{
    size_t	i;

    i = -1;
    while (set[++i])
	if (c == set[i])
	    return (1);
    return (0);
}
