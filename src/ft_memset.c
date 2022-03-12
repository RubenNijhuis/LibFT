/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
<<<<<<< HEAD
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 15:50:31 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/12 15:50:31 by rubennijhui   ########   odam.nl         */
=======
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/09 09:44:59 by rnijhuis      #+#    #+#                 */
/*   Updated: 2021/11/09 09:45:00 by rnijhuis      ########   odam.nl         */
>>>>>>> 46435a4407a0b557a1a1d8146d54399179769ce5
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int val, size_t len)
{
	unsigned char	*ptr_dest;

	ptr_dest = dest;
	while (len > 0)
	{
		*ptr_dest = val;
		ptr_dest++;
		len--;
	}
	return (dest);
}
