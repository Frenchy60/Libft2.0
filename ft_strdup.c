#include "libft.h"

char	    *ft_strdup(const char *s)
{
    char    *dup;
    size_t  i;

    if(!(dup = malloc(sizeof(char) * (ft_strlen(s) + 1))))
	return (NULL);
    i = -1;
    while (s[++i])
	dup[i] = s[i];
    dup[i] = 0;
    return (dup);
}
