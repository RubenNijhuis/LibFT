#include "./libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s;
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		s = nb % 10 + '0';
		ft_putchar_fd(s, fd);
	}
	if (nb < 10)
		ft_putchar_fd(nb + '0', fd);
}
