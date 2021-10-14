#include "./libft.h"

// static size_t	nb_len(int nb)
// {
// 	int	len;

// 	len = 0;
// 	if (nb <= 0)
// 		len++;
// 	while (nb)
// 	{
// 		len++;
// 		nb = nb / 10;
// 	}
// 	return (len);
// }

// char	*ft_itoa(int n)
// {
// 	int		len;
// 	char	*str;
// 	long	nb;

// 	len = nb_len(n);
// 	nb = n;
// 	str = malloc(sizeof(char) * len + 1);
// 	if (!str)
// 		return (NULL);
// 	if (nb < 0)
// 	{
// 		str[0] = '-';
// 		nb = -nb;
// 	}
// 	if (nb == 0)
// 		str[0] = '0';
// 	str[len] = '\0';
// 	len--;
// 	while (nb)
// 	{
// 		str[len] = nb % 10 + '0';
// 		ft)
// 		len--;
// 		nb = nb / 10;
// 	}
// 	return (str);
// }

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	write(fd, s, ft_strlen(s));
}
