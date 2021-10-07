#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	c;
	size_t	l;

	c = 0;
	l = ft_strlen((char *)n);
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
