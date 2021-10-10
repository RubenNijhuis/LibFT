#include "./libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if ((srclen + 1) < dstsize)
		ft_memcpy(dst, src, srclen);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize);
		dst[dstsize] = '\0';
	}
	return (srclen);
}
