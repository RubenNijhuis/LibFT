#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_strlen(char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_bzero(void *ptr, int c, size_t len);
void	*ft_memset(void *ptr, int c, size_t len);
void	*ft_memcpy(void *dest, void const *src, size_t len);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif