#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int	*ptr;

	ptr = (int *)malloc(count * sizeof(size));
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
