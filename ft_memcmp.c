#include "./libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*one;
	const unsigned char	*two;

	one = s1;
	two = s2;
	while (n != 0)
	{
		if (*one != *two)
			return (*one - *two);
		n--;
		one++;
		two++;
	}
	return (0);
}
