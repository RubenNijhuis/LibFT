/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_nbrlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 15:46:45 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/04/23 14:04:43 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_nbrlen(long nb)
{
	unsigned int	len;

	len = 0;
	if (nb > LONG_MAX || nb < LONG_MIN)
		return (nb);
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}
