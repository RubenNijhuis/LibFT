#include "./libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;

	string = malloc(len * sizeof(char));
	if (string == NULL)
		return (NULL);
	ft_strlcpy(string, &s[start], len);
	return (string);
}
