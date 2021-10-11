#include "./libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	startpos;
	size_t	srclen;

	srclen = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start > srclen || len == 0)
		return (ft_strdup(""));
	string = malloc((len + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	if (start + len > srclen)
		startpos = srclen - start;
	else
		startpos = len;
	ft_memcpy(string, s + start, startpos);
	string[startpos] = '\0';
	return (string);
}
