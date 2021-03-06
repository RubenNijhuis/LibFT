/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 15:50:47 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/05/07 12:12:17 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * Runs a given function on each character in the string
 * 
 * @param s The given string
 * @param f A function to be called on each string
 */
void	ft_striteri(char *s, void (*f)(uint32_t, char*))
{
	uint32_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i++;
	}
}
