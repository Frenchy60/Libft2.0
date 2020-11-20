#include "libft.h"

static char *ft_strdupc(char **split, char c)
{
    int	    size;
    char    *newstr;

    size = 0;
    while (split[0][size] && split[0][size] != c)
	size++;
    if (!(newstr = malloc(sizeof(char) * (size + 1))))
	return (NULL);
    size = 0;
    while (**split && **split != c)
	newstr[size++] = (*(*split)++);
    newstr[size] = 0;
    return (newstr);
}

char	    **ft_split(char const *s, char c)
{
    size_t  size;
    size_t  i;
    size_t  o;
    char    **split;

    if (!s)
	return (NULL);
    size = 0;
    i = -1;
    while (s[++i])
	if (s[i] != c && (!s[i + 1] || s[i + 1] == c))
	    size++;
    if (!(split = malloc(sizeof(char *) * (size + 1))))
	return (NULL);
    o = -1;
    i = -1;
    split[size] = (char *)s;
    while (++o < size)
    {
	while (*split[size] == c)
	    *split[size] += 1;
	split[o] = ft_strdupc(&(split[size]), c);
    }
    split[size] = NULL;
    return (split);
}

#include <stdio.h>

int	    main(int i, char **argv)
{
    char    **split;

    if (i != 2)
	return (0);
    split = ft_split(argv[1], ' ');
    i = -1;
    while (split[++i])
	printf("%s\n", split[i]);
    return (0);
}
