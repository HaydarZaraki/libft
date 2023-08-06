#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (lst == NULL || del == NULL)
        return ;
    while((*lst)->next != NULL)
    {
        del((*lst)->content);
        free((*lst));
        (*lst) = (*lst)->next;
    }
    del((*lst)->content);
    free((*lst));
    *lst = NULL;
}