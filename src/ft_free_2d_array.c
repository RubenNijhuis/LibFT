/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_2d_array.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 10:30:49 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/04/24 10:41:39 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_2d_array(char **arr)
{
	void	ft_free_array(void *array)
{
	void	**start;
	void	**arr;

	if (!array)
		return ;
	arr = array;
	start = arr;
	while (*arr)
		free(*arr++);
	free(start);
}
}
