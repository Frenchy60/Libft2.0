#include "libft.h"

size_t	    ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;

    i = -1;
    if (!size)
	return (ft_strlen(src));
    if (!dst || !src)
	return (0);
    while (++i < size - 1 && src[i])
	dst[i] = src[i];
    if (size)
	dst[i] = 0;
    return (ft_strlen(src));
}
