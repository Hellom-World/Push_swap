typedef struct s_stack
{
        long                    nbr;
        long                    index;
        struct s_stack  *next;
        struct s_stack  *prev;
}       t_stack;

void    printPilha(t_stack *a)
{
        int     i = 0;
        i = a->index-1;
        while(i >= 0)
        {
                printf(" %i\n", p->nbr[i]);
                i--;
        }
}

void	empilha(int valor, int index, t_stack *p, )
{
	p->nbr[p->index] = valor;
	p->index++;
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	a.index = 0;	
}
