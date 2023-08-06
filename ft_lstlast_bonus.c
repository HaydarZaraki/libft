#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return NULL;
    t_list *duplicate;
    duplicate = lst;
    while (duplicate->next != NULL)
    {
        duplicate = duplicate->next;
    }
    return duplicate;
}