#include "libft.h"

char	    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int	i;
    unsigned int	size;
    char		*str;

    i = -1;
    if (!s)
	return (NULL);
    size = ft_strlen(s);
    if (!(str = malloc (sizeof(char) * (size + 1))))
	return (NULL);
    while (++i < size)
	str[i] = f(i, s[i]);
    str[i] = 0;
    return (str);
}
