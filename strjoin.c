#include "./libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *string;
	size_t	strlen1;
	size_t	strlen2;

	strlen1 = ft_strlen(s1);
	strlen2 = ft_strlen(s2);
	string = malloc((strlen1 + strlen2 + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	ft_strlcpy(string, s1, strlen1);
	ft_strlcpy(string + strlen1, s2, strlen2);
	return (string);
}
