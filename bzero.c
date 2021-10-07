#include "./libft.h"

void	*ft_bzero(void *ptr, int c, size_t len)
{
	ft_memset(ptr, 0, len);
}
