#include "sort_list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tmp = lst;
	int result = 0;
	while (tmp->next)
	{
		a = tmp->data;
		b = tmp->next->data;
		result = (*cmp)(a, b);
		if (result == 0)
		{
			int	buf = a;
			a = b;
			b = buf;
			tmp = lst;
		}
		else
			tmp = tmp->next;
	}
	return (lst);
}
