t_stack *ft_stringway(char **argv)
{
    t_stack *a;
    char    **tmp;
    int i;
    int j;

    i = 0;
    a = NULL;
    tmp = ft_split(argv[1], 32);

    while(tmp[i])
    {
        j = ft_atoi(tmp[i]); //verificar se nao sera preciso modificar o ft_atoi.
        ft_add_back(&a, ft_stack_new(j));
        i++;
    }
    ft_freestr(tmp);
    free(tmp);
    return (a);
}

t_stack *ft_triagem(int argc, char **argv)
{
    t_stack *a;
    int i;
    int j;

    i = 0;
    a = NULL;

    if(argc < 2)
        ft_error();
    if(argc == 2)
        a = ft_stringway(argv);
    else
    {
        while(i < argc)
        {
            j = ft_atoi(argv[i]);
            ft_add_back(&a, ft_stack_new(j));
            i++;
        }
    }
    return (a);
}