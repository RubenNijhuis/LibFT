#include "./libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t len)
{
	unsigned char	*ptrSrc;
	unsigned char	*ptrDest;

	ptrSrc = src;
	ptrDest = dest;
	while (len-- > 0)
		*ptrDest++ = *ptrSrc++;
	return (dest);
}
