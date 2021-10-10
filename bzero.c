#include "./libft.h"

void	*ft_bzero(void *ptr, size_t len)
{
	return (ft_memset(ptr, 0, len));
}
