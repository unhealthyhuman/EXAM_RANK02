typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}  t_list;

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

//quiero remover el primer elemento y el siguiente pero solo si el siguiente tiene el mismo valor que el primer elemento en la lista
