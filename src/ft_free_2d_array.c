/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_2d_array.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 18:22:39 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/04/24 18:25:03 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_2d_array(char ***arr, unsigned int item_amount)
{
	while (item_amount > 0)
	{
		--item_amount;
		free((*arr)[item_amount]);
	}
	free((*arr));
	(*arr) = NULL;
}
