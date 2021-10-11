#include "./libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t len)
{
	unsigned char	*ptrSrc;
	unsigned char	*ptrDest;

	ptrSrc = (unsigned char *) src;
	ptrDest = (unsigned char *) dest;
	if (!dest && !src)
		return (NULL);
	while (len > 0)
	{
		*ptrDest = *ptrSrc;
		ptrDest++;
		ptrSrc++;
		len--;
	}
	return (dest);
}
