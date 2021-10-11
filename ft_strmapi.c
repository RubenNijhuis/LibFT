#include "./libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*string;
	unsigned int	i;

	i = 0;
	string = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = 0;
	return (string);
}
