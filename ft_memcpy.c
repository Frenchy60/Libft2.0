#include "libft.h"

void        *ft_memcpy(void *dest, const void *src, size_t n)
{
    if (!dest && !src)
        return (dest);
    char    *s1 = (char *)dest;
    char    *s2 = (char *)src;

    while (n-- > 0)
        s1[n] = s2[n];
    return (dest);
}
