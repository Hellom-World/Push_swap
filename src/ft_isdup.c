int ft_isdup(t_stack *a)
{
    t_stack *tmp;

    while (a)
    {
        tmp = a->next;

        while (tmp)
        {
            if (a->nbr == tmp->nbr)
                return (1);
            tmp = tmp->next;
        }
        a = a->next;
    }
    return (0);
}