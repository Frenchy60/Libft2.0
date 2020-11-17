#include "libft.h"

void        *ft_memset(void *str, int c, size_t n)
{
    const char  c1 = (const char) c;
    char    *s = (char *)str;

    while (n-- > 0)
        s[n] = c1;
    return (str);
}
