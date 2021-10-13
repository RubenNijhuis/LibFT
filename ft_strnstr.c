#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	l;

	if (*n == '\0')
		return ((char *)h);
	l = ft_strlen(n);
	while (len >= l)
	{
		len--;
		if (ft_strncmp(h, n, l) == 0)
			return ((char *)h);
		h++;
	}
	return (NULL);
}
