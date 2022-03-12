/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 15:50:21 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/12 15:50:21 by rubennijhui   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*block;

	block = (t_list *) malloc(sizeof(*block));
	if (block == NULL)
		return (NULL);
	block->content = content;
	block->next = NULL;
	return (block);
}
