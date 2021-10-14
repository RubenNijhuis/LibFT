#include "./libft.h"

int	contains(char c, char const *set)
{
	while (*set != 0)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*string;
	unsigned int	start;
	unsigned int	end;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (contains(s1[start], set))
		start++;
	while (contains(s1[end], set))
		end--;
	string = ft_substr(s1, start, ft_strlen(s1)
			- start - (ft_strlen(s1) - end) - 1);
	return (string);
}
