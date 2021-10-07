#include "./libft.h"

char	*ft_strdup(const char *s1)
{	
	char	*string;

	string = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	ft_strlcpy(string, s1, ft_strlen(s1) + 1);
	return (string);
}
