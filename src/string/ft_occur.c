/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_occur.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/28 11:01:27 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/06/28 11:03:39 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

uint32_t	ft_str_occur(char *str, char c)
{
	uint32_t	amount;
	uint32_t	i;

	while (str[i] != '\0')
	{
		if (str[i] == c)
			amount++;
		i++;
	}
	return (amount);
}
