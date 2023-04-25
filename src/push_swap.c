

int	main(int argc, char **argv)
{
	t_stack	*a; //o indentificador "t_stack" ainda nao esta definido

	a = ft_triagem(argc, argv);
	if(!a || ft_isdup(a))
	{
		ft_free(&a);
		ft_error();
	}
	
	if(!ft_checksorted(a))
	{
		ft_sort(&a);
	}
	ft_free(&a);
	return (0);
}
