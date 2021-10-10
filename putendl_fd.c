#include "./libft.h"

void ft_putendl_fd(char *s, int fd)
{
	char *string = ft_strjoin(s, "\n");
	write(fd, string, ft_strlen(string));
}