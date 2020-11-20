#include "libft.h"

void	    ft_putnbr_fd(int n, int fd)
{
    const long int	N = (n < 0)? -(long int)n : n;

    if (n < 0)
	write(fd, "-", 1);
    if (N >= 10)
	ft_putnbr_fd(N / 10, fd);
    ft_putchar_fd(N % 10 + '0', fd);
}
