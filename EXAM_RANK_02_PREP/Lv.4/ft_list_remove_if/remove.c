// Passed Moulinette 2019.09.01

#include <stdlib.h>
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}  t_list;

#include <stdio.h>
#include <string.h>

void	print_list(t_list **begin_list)
{
	t_list *cur = *begin_list;
	while (cur != 0)
	{
		printf("%s\n", cur->data);
		cur = cur->next;
	}
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	// Condition, so i know that recursion magic will stopp
	if (begin_list == NULL || *begin_list == NULL)
		return;
	// Temp variable, that makes delete/freeing possible
	t_list *cur = *begin_list;

	// Delete: dat must be deleted if cmp(...) == 0
	if (cmp(cur->data, data_ref) == 0)
	{
		puts("DELETE");
		// I set list_start to next, so i can delete/free element 
		*begin_list = cur->next;
		// free the elemente
		free(cur);
		// I must call remove again, because i have to check my new start-element and maybe delete it also (List: 1, 2, 2, 3; to_delete: 2)
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	//  save the beginning of the list so we do not loose the adress
	cur = *begin_list;
	
	// call remove with next element
	ft_list_remove_if(&cur->next, data_ref, cmp);
}
// ---------------------------------------------------------------------
// Paul's while loop ver

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list    *remove;
    t_list    *current;

    //Save the beginning of the list (you need it at the end to check if the beginning should be deleted)
    current = *begin_list;

    //Checking if the NEXT element must be deleted:
    while (current && current->next)
    {
        if ((*cmp)(current->next->data, data_ref) == 0)
        {
            remove = current->next;
            current->next = remove->next;
            free(remove);
        }
        current = current->next;
    }

    //Checking if the first element must be removed:
    current = *begin_list;
    if (current && (*cmp)(current->data, data_ref) == 0)
    {
        *begin_list = current->next;
        free(current);
    }
}

// ---------------------------------------------------------------------


int		main(void)
{
	char straa[] = "String aa";
	t_list *aa = malloc(sizeof(t_list));
	aa->next = 0;
	aa->data = straa;

	char strbb[] = "String bb";
	t_list *bb = malloc(sizeof(t_list));
	bb->next = 0;
	bb->data = strbb;

	char strcc[] = "String cc";
	t_list *cc = malloc(sizeof(t_list));
	cc->next = 0;
	cc->data = strbb;

	char strdd[] = "String dd";
	t_list *dd = malloc(sizeof(t_list));
	dd->next = 0;
	dd->data = strdd;

	aa->next = bb;
	bb->next = cc;
	cc->next = dd;

	t_list **begin_list = &aa;

	print_list(begin_list);
	printf("----------\n");
	ft_list_remove_if(begin_list, straa, strcmp);
	printf("----------\n");

	print_list(begin_list);
}