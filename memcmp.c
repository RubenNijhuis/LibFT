#include "./libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*one;
	const char	*two;

	one = s1;
	two = s2;
	while (n != 0 && *one != 0 && *two != 0)
	{
		if (*one != *two)
			return (*one - *two);
		n--;
		one++;
		two++;
	}
	return (0);
}
