#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc(sizeof(struct s_list));
	if (!ptr)
		return (NULL);
	ptr->data = data;
	ptr->next = NULL;
	return (ptr);
}
