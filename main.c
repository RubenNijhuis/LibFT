#include <stdio.h>
#include <string.h>
#include "./libft.h"

int main()
{
	char	*s1 = "";
	char	*s2 = "AAAAAA";

	int		i1 = strncmp(s1, s2, 6);
	int		i2 = ft_strncmp(s1, s2, 6);

	printf("%i, %i", i1, i2);
}