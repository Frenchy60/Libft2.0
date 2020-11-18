#include "libft.h"

char        *ft_substr(const char *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  i;

    if (!s)
	return (NULL);
    i = ft_strlen(s);
    if (start >= i)
    {
	if (!(sub = malloc(sizeof(char))))
	    return (NULL);
	*sub = 0;
	return (sub);
    }
    i -= start;
    if (len > i)
	len = i;
    if (!(sub = malloc(sizeof(char) * (len + 1))))
	return (NULL);
    i = -1;
    while (++i < len)
	sub[i] = s[i + start];
    sub[i] = 0;
    return (sub);
}
