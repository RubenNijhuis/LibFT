#include "./libft.h"

void	*ft_memset(void *dest, int val, size_t len)
{
	unsigned char	*ptr_dest;

	ptr_dest = dest;
	while (len > 0)
	{
		*ptr_dest = val;
		ptr_dest++;
		len--;
	}
	return (dest);
}
