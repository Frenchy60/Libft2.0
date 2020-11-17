#include "libft.h"

void        *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char    *s1 = (unsigned char *)dest;
    unsigned char    *s2 = (unsigned char *)src;
    size_t     i;

    if (!n)
        return (NULL);
    i = -1;
    while (++i < n - 1 && s2[i] != (unsigned char) c)
        s1[i] = s2[i];
    if (n)
        s1[i] = s2[i];
    return ((s2[i] == c)? (void *)&(s1[i + 1]) : NULL);
}
