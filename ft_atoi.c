#include "./libft.h"

static int	contains(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

int	ft_atoi(const char *src)
{
	int		sign;
	long	val;

	sign = 1;
	val = 0;
	while (contains("\t\n\v\f\r ", *src))
		src++;
	if (*src == '+' || *src == '-')
	{
		if (*src == '-')
			sign = -1;
		src++;
	}
	while (ft_isdigit(*src))
	{
		val *= 10;
		val += *src - '0';
		src++;
	}
	return ((int) val * sign);
}
