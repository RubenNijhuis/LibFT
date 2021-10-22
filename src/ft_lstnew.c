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
