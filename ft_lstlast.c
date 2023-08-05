#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *duplicate;
    duplicate = lst;
    while (duplicate->next != NULL)
    {
        duplicate = duplicate->next;
    }
    return duplicate;
}