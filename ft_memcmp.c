#include "libft.h"

int         ft_memcmp(void *str1, const void *str2, size_t n)
{
    const unsigned char    *s1 = (const unsigned char *)str1;
    const unsigned char    *s2 = (const unsigned char *)str2;

    size_t  i;
    i = -1;
    while (++i < n && s1[i] == s2[i])
        ;
    if (i == n)
        return (0);
    return (s1[i] - s2[i]);
}
