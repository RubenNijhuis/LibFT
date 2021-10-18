#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	start_pos;
	size_t	src_len;

	if (s == NULL)
		return (NULL);
	src_len = ft_strlen(s);
	if (start > src_len || len == 0)
		return (ft_strdup(""));
	string = malloc((len + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	if (start + len > src_len)
		start_pos = src_len - start;
	else
		start_pos = len;
	ft_memcpy(string, s + start, start_pos);
	string[start_pos] = '\0';
	return (string);
}
