#include "libft.h"
#include <stdio.h>

int main()
{
	char **newString = ft_split("          ", ' ');
    printf("%s - %s - %s - %s - %s - %s", newString[0], newString[1], newString[2], newString[3], newString[4], newString[5]);
    return (0);
}