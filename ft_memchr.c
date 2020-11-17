#include "libft.h"

void        *ft_memchr(void *str, int c, size_t n)
{
    char    *s = (char *)str;
    size_t  i;

    i = -1;
    while (++i < n)
        if (s[i] == (char) c)
            return ((void *)&(s[i]));
    return (NULL);
}
