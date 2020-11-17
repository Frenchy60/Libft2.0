#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct  s_list
{
    void            *content;
    size_t          content_size;
    struct s_list   *next;
}               t_list;

size_t          ft_strlen(const char *s);
int             ft_isalpha(int c);
int             ft_isdigit(int c);
int             ft_isalnum(int c);
int             ft_isprint(int c);
int             ft_isascii(int c);
void            *ft_memcpy(void *dest, const void *src, size_t n);
void            *ft_memccpy(void *dest, const void *src, int c, size_t n);
int             ft_memcmp(void *str1, const void *str2, size_t n);
void            *ft_memcpy(void *dest, const void *src, size_t n);
void            *ft_memmove(void *str1, const void *str2, size_t n);
void            *ft_memset(void *str, int c, size_t n);
void            ft_bezero(void *s, size_t n);


#endif
