#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list  *duplicate;
    duplicate = lst;
    int i;
    i = 0;
    while (duplicate != NULL)
    {
        duplicate = duplicate->next;
        i++;
    }
    return i;
}