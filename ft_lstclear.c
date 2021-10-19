#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	while (*lst)
	{
		if ((*lst)->content)
			del((*lst)->content);
		p = *lst;
		*lst = p->next;
		free(p);
	}
	lst = NULL;
}
