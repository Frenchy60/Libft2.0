#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	i;
    size_t	c;

    i = ft_strlen(dst);
    c = -1;
    if (size < i + 1)
	return (ft_strlen(src) + size);
    while (src[++c] && i + c + 1< size)
	dst[i + c] = src[c];
    if (size > i)
	dst[i + c] = 0;
    return (i + ft_strlen(src));
}
