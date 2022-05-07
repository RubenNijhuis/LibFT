/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_2d_arrlen.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 19:09:04 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/05/07 12:09:55 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint32_t	ft_2d_arrlen(char **arr)
{
	uint32_t	i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}
