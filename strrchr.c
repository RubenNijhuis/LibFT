char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	while (i != 0)
	{
		if (*s == c)
			return ((char *)s);
		i--;
		s--;
	}
	return (0);
}
