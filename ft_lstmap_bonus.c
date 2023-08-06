#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    if (!lst || !f)
        return NULL;
    t_list *new_list = NULL;
    t_list *current = lst;
    while (current) {
        void *new_content = f(current->content);
        if (!new_content) {
            ft_lstclear(&new_list, del);
            return NULL;
        }
        t_list *new_node = ft_lstnew(new_content);
        if (!new_node) {
            del(new_content);
            ft_lstclear(&new_list, del);
            return NULL;
        }
        ft_lstadd_back(&new_list, new_node);
        current = current->next;
    }
    return new_list;
}