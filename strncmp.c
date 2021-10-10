#include "./libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n != 0)
	{
		if (*s1 != *s2++)
			return (*(char *)s1 - *(char *)--s2);
		if (*s1++ == 0)
			return (0);
		n--;
	}
	return (0);
}
