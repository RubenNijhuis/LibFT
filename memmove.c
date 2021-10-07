#include "./libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	char	*d;
	char	*s;
	char	*lastSrc;
	char	*lastDest;

	d = dest;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		lastSrc = s + (len - 1);
		lastDest = d + (len - 1);
		while (len--)
			*lastDest-- = *lastSrc--;
	}
	return (dest);
}
