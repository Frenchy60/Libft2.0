#include "libft.h"

void		*ft_calloc(size_t nmemb, size_t size)
{
    const size_t    sum = nmemb * size;
    void	    *str;

    if (sum > 2147483647)
	return (NULL);
    if (!(str =malloc(sum)))
	return (NULL);
    ft_bzero(str, sum);
    return (str);
}
