/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
<<<<<<< HEAD
/*   By: rubennijhuis <rubennijhuis@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/12 15:50:15 by rubennijhui   #+#    #+#                 */
/*   Updated: 2022/03/12 15:50:15 by rubennijhui   ########   odam.nl         */
=======
/*   By: rnijhuis <rnijhuis@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/09 09:44:33 by rnijhuis      #+#    #+#                 */
/*   Updated: 2021/11/09 09:44:34 by rnijhuis      ########   odam.nl         */
>>>>>>> 46435a4407a0b557a1a1d8146d54399179769ce5
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
