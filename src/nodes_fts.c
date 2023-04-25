t_stack ft_end_node(t_stack *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst);
}

int ft_node_len (t_stack *lst)
{
    size_t  i;

    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}

int ft_nbr_min(t_stack *a)
{
    int i;

    i = a->nbr;
    while (a)
    {
        if(a->nbr < i)
            i = a->nbr;
        a = a->next;
    }
    return (i);
}

int ft_nbr_max(t_stack *a)
{
    int i;

    i = a->nbr;
    while (a)
    {
        if (a->nbr > i)
            i = a->nbr;
        a = a->next;
    }
    return (i);
}