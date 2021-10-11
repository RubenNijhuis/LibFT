#include "./libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	offset;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	offset = dstlen;
	while (*src && dstsize - offset - 1 > 0)
	{
		dst[offset] = *src;
		++offset;
		++src;
	}
	dst[offset] = '\0';
	return (srclen + dstlen);
}
