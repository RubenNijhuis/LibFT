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

int	ft_atoi(const char *s)
{
	int		sign;
	long	val;

	sign = 1;
	val = 0;
	while (contains("\t\n\v\f\r ", *s))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (ft_isdigit(*s))
	{
		val *= 10;
		val += *s - '0';
		s++;
	}
	return ((int) val * sign);
}
