char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i + 1 != 0)
	{
		if ((char)s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
