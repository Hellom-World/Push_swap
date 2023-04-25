
int ft_checkordem(t_stack *stack_a)
{
    int i;

    i = stack_a->nbr;

    while (stack_a)
    {
        if (i > stack_a->nbr)
            return (0);
            i = stack_a->nbr;
            stack_a = stack_a->next;
    }
}