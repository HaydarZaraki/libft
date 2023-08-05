#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (*lst != NULL)
    {
        ft_lstlast(*lst)->next = new;
        while (new->next != NULL)
        {
            new = new->next;
        }
        new->next = NULL;
    }
    else
    {
        ft_lstadd_front(lst, new);
        new->next = NULL;
    }
}