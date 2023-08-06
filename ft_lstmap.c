#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    if (lst == NULL)
        return 0;
    t_list *duplicate;
    duplicate = malloc(sizeof(t_list));
    duplicate = lst;
    while(duplicate->next != NULL && lst->next != NULL)
    {
        f(duplicate->content);
        del(lst->content);
        free(lst);
        duplicate = duplicate->next;
        lst = lst->next;
    }
    f(duplicate->content);
    del(lst->content);
    free(lst);


    return duplicate;
}