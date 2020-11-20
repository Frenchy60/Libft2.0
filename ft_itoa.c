#include "libft.h"

static int	get_strlen(int n, int i)
{
    while (n /= 10)
	i++;
    return (i);
}

char		*ft_itoa(int n)
{
    char	*num;
    const int	size = get_strlen(n, 1);
    const int	neg = (n < 0)? 1 : 0;
    
    if (n == -2147483648)
	return (ft_strdup("-2147483648"));
    if (!(num = malloc(sizeof(char) * (size + 1 + neg))))
	return (NULL);
    if (neg)
    {
	n *= -1;
	num++[0] = '-';
    }
    num[size] = size;
    while (num[size])
    {
	num[(int)(num[size]-- - 1)] = n % 10 + '0';
	n /= 10;
    }
    return (num - neg);
}
