#include "./libft.h"

void	*ft_memset(void *dest, int val, size_t len)
{
	unsigned char	*ptr;

	ptr = dest;
	while (len > 0)
	{
		*ptr = val;
		ptr++;
		len--;
		
	}
	return (dest);
}