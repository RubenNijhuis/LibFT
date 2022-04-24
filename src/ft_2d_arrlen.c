/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_2d_arrlen.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 19:09:04 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/04/24 19:13:52 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_2d_arrlen(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}
