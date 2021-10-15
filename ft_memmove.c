#include "./libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (d < s)
		ft_memcpy(d, s, len);
	else
	{
		s = src + (len - 1);
		d = dest + (len - 1);
		while (len > 0)
		{
			*d = *s;
			d--;
			s--;
			len--;
		}
	}
	return (dest);
}
