#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	int	*ptr;

	ptr = (int *)malloc(count * sizeof(size));
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, 0, count * size);
	return (&ptr[0]);
}
