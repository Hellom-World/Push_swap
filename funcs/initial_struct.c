#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
        long                    nbr;
        long                    index;
        struct s_stack  *next;
        struct s_stack  *prev;
}       t_stack;

void    printPilha(t_stack *a)
{
        while(a)
        {
                printf("vlr: %ld - ", a->nbr);
		printf("id: %ld\n", a->index);
                a = a->next;
        }
}

void	insert_in(int index, int valor, t_stack **list)
{
	t_stack *card = malloc(sizeof(t_stack));

	if (card)
	{
		card->nbr = valor;
		card->next = *list;
		card->index = index;

		*list = card;
	}
	else
		printf("Erro ao alocar memoria!\n");
}

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;
	t_stack	*a = NULL;
	t_stack	b;

	if (argc >= 2)
	{
		while (argv[i])
		{
			insert_in(j, atoi(argv[i]), &a);
			i++;
			j++;
		}
	}
	printPilha(a);
		
}
