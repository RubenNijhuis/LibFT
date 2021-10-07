#include "./libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			dstlen;
	size_t			srclen;
	unsigned int	i;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	while ((dstsize > dstlen + i) && srclen != 0)
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	dst[dstlen + i + 1] = 0;
	return (srclen + dstlen);
}
