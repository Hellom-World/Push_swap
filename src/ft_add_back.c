void    ft_add_back(t_stack **stack, t_stack *stack_new)
{
    if (!stack)
        return;
    if (!*stack)
        *stack = stack_new;
    else
        (ft_end_node(*stack))->next = stack_new;
}