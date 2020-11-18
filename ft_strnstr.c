#include "libft.h"

char        *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  o;

    if (!little || !big)
	return (NULL);
    i = -1;
    if (!*little && !len)
	return ((char *)big);
    while (++i < len && big[i])
    {
	o = 0;
	while (little[o] == big[i + o] && i + o < len)
	    o++;
	if (!little[o])
	    return (&((char *)big)[i]);
    }
    return (NULL);
}
