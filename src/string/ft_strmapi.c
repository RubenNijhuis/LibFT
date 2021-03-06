/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 15:50:55 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/05/08 17:36:02 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(uint32_t, char))
{
	char		*string;
	uint32_t	i;

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
