char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 1;
	while (*s)
	{
		i++;
		s++;
	}
	while (i != 0)
	{
		if ((char)*s == (char)c)
			return ((char *)s);
		i--;
		s--;
	}
	return (0);
}
