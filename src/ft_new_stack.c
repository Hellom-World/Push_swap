t_stack *ft_stack_new(int content)
{
    t_stack *new;

    new = malloc(sizeof(t_stack));
    if (!new)
        ft_error();
    new->number = content;
    new->next = NULL;
    return (new);
}