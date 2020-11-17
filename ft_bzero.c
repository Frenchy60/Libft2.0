#include "libft.h"

void        ft_bzero(void *s, size_t n)
{
    char    *s1 = (char *)s;

    while (n--)
        s1[n] = 0;
}
