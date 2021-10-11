#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	l;

	l = ft_strlen(n);
	if (*n == '\0')
		return ((char *)h);
	while (len >= l)
	{
		len--;
		if (ft_memcmp(h, n, l) == 0)
			return ((char *)h);
		h++;
	}
	return (0);
}
