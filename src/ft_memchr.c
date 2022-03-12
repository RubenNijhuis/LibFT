/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
<<<<<<< HEAD
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 15:50:24 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/12 15:50:24 by rubennijhui   ########   odam.nl         */
=======
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/09 09:44:48 by rnijhuis      #+#    #+#                 */
/*   Updated: 2021/11/09 09:44:48 by rnijhuis      ########   odam.nl         */
>>>>>>> 46435a4407a0b557a1a1d8146d54399179769ce5
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	const unsigned char	*ptr_src;
	unsigned char		chr;

	ptr_src = (const unsigned char *)src;
	chr = (unsigned char)c;
	while (n > 0)
	{
		if (*ptr_src == chr)
			return ((void *)ptr_src);
		ptr_src++;
		n--;
	}
	return (NULL);
}
