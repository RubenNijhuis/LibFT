/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
<<<<<<< HEAD
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 15:50:29 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/12 15:50:29 by rubennijhui   ########   odam.nl         */
=======
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/09 09:44:57 by rnijhuis      #+#    #+#                 */
/*   Updated: 2021/11/09 09:44:57 by rnijhuis      ########   odam.nl         */
>>>>>>> 46435a4407a0b557a1a1d8146d54399179769ce5
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (d < s)
		ft_memcpy(d, s, len);
	else
	{
		s = src + (len - 1);
		d = dest + (len - 1);
		while (len > 0)
		{
			*d = *s;
			d--;
			s--;
			len--;
		}
	}
	return (dest);
}
