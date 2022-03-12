/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
<<<<<<< HEAD
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 15:50:55 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/12 15:50:55 by rubennijhui   ########   odam.nl         */
=======
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/09 09:45:48 by rnijhuis      #+#    #+#                 */
/*   Updated: 2021/11/19 13:27:09 by rnijhuis      ########   odam.nl         */
>>>>>>> 46435a4407a0b557a1a1d8146d54399179769ce5
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*string;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	string = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (string == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		string[i] = f(i, s[i]);
		i++;
	}
	return (string);
}
