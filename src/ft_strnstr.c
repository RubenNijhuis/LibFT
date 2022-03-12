/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
<<<<<<< HEAD
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 15:50:58 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/12 15:50:58 by rubennijhui   ########   odam.nl         */
=======
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/09 09:46:00 by rnijhuis      #+#    #+#                 */
/*   Updated: 2021/11/09 09:46:01 by rnijhuis      ########   odam.nl         */
>>>>>>> 46435a4407a0b557a1a1d8146d54399179769ce5
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	l;

	l = *h;
	if (*n == '\0')
		return ((char *)h);
	l = ft_strlen(n);
	while (len >= l)
	{
		len--;
		if (ft_strncmp(h, n, l) == 0)
			return ((char *)h);
		h++;
	}
	return (NULL);
}
