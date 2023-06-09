/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:41:11 by heolivei          #+#    #+#             */
/*   Updated: 2023/06/09 20:38:28 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void numberToBinary(unsigned int num) {
    int size = 8; // Tamanho em bits do tipo unsigned int
    int i = size - 1;

    while (i >= 0) {
        printf("%d", (num >> i) & 1);
        i--;
    }
}

void printListBinary(t_stack *head_a, t_stack *head_b)
{
        t_stack *current_node_a = head_a;
        t_stack *current_node_b = head_b;

         printf("pilha a:                    pilha b:\n");
        while (current_node_a != NULL || current_node_b != NULL)
        {
                if(current_node_a != NULL)
                {	
			printf("index:");
			numberToBinary(current_node_a->index);
                        printf("   -- nbr: %ld  | ", current_node_a->nbr);
                        current_node_a = current_node_a->next;
                }
                else {
                        printf("           | ");
                }
                if(current_node_b != NULL)
                {
			printf("index:");
                        numberToBinary(current_node_b->index);
                        printf("   -- nbr: %ld  | ", current_node_b->nbr);
                        current_node_b = current_node_b->next;
                }
                 else {
                        printf("\n");
                }

        }
        write(1, "\n", 1);
}


void printList(t_stack *head_a, t_stack *head_b)
{
        t_stack *current_node_a = head_a;
        t_stack *current_node_b = head_b;

         printf("pilha a:           pilha b:\n");
        while (current_node_a != NULL || current_node_b != NULL)
        {
                if(current_node_a != NULL)
                {
                        printf("nbr: %ld   -- id: %ld  | ", current_node_a->nbr, current_node_a->index);
                        current_node_a = current_node_a->next;
                }
                else {
                        printf("           | ");
                }
                if(current_node_b != NULL)
                {
                        printf("nbr: %ld   -- id: %ld  | \n", current_node_b->nbr, current_node_b->index);
                        current_node_b = current_node_b->next;
                }
                 else {
                        printf("\n");
                }

        }
        write(1, "\n", 1);
}

t_stack *min_nbr_to_top(t_stack *stack_a)
{
        int min;
        min = ft_nbr_min(stack_a);

       
    // Movendo o menor número para o topo da pilha
    if (ft_find_index(stack_a, min) <= (ft_node_len(stack_a) / 2))
    {
        // Se o menor número estiver na metade inferior da pilha
        while (stack_a->nbr != ft_nbr_min(stack_a))
        {
                ft_ra(&stack_a);
        }
    }
    else {
        // Se o menor número estiver na metade superior da pilha
        while (stack_a->nbr != ft_nbr_min(stack_a))
        {
                ft_rra(&stack_a);
        }
    }
    
    return (stack_a);
}

t_stack *ft_little_sort(t_stack *a, t_stack *b)
{
        while(ft_node_len(a) > 3)
        {
                a = min_nbr_to_top(a);
                ft_pb(&a, &b);
                
        }
        if (!ft_checkordem(a))
                ft_sort_three(&a);
        while(ft_node_len(b))
                ft_pa(&a, &b);
        return (a);
}
t_stack *ft_big_sort(t_stack *a, t_stack *b)
{
        int i;
        int j;
        int bit_position;
        i = bit_len(ft_index_max(a));
        j = ft_node_len(a);
        bit_position = 0;
        //Determinar o valor de bits que serao analisados
        //de acordo com o maior indice encontrado
        while(i)
        {
                j = ft_node_len(a); // Reinicia o valor de j para cada iteração
                while(j > 0)
                {
                        if (((a->index >> bit_position) & 1) == 0) // Verifica se o primeiro bit é igual a 0
                        {
                                ft_pb(&a, &b);
                        }
                        else
                        {
                                ft_ra(&a);
                        }
                        j--;
                }
                while(ft_node_len(b))
                {
                        ft_pa(&a, &b);
                }
                bit_position++;
                i--;
        }
        return (a);
}
t_stack	*ft_sort_b(t_stack **stack_a)
{
	t_stack *stack_b;
	t_stack *tmp;

	stack_b = NULL;

	tmp = *stack_a;
	printf("-\n");
	printf("Organizacao da Stack_a: \n");
	while (tmp)
	{
		printf("nbr: %ld - ", tmp->nbr);
		printf("id: %ld\n", tmp->index);
		tmp = tmp->next;
	}
	printf("-\n");
	if (ft_node_len(*stack_a) < 6 && !ft_checkordem(*stack_a))
        {
               *stack_a = ft_little_sort(*stack_a, stack_b);
        }
        else
        {
                printListBinary(*stack_a, stack_b);
                *stack_a = ft_big_sort(*stack_a, stack_b);
        }
	return (stack_b);
}


void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;
        t_stack *tmp;

	stack_b = NULL;

	printList(*stack_a, stack_b);	
	if (ft_node_len(*stack_a) == 2)
	{
		ft_sa(stack_a);
		printList(*stack_a, stack_b);
		printListBinary(*stack_a, stack_b);
	}
        else if(ft_node_len(*stack_a) == 3 && !ft_checkordem(*stack_a))
		ft_sort_three(stack_a);
	else
	{	
		stack_b = ft_sort_b(stack_a);
		printf("Organizacao da Stack_a: \n");
                tmp = *stack_a;
	        while (tmp)
	        {
		        printf("nbr: %ld - ", tmp->nbr);
		        printf("id: %ld\n", tmp->index);
		        tmp = tmp->next;
	        }
                printList(*stack_a, stack_b);
		printListBinary(*stack_a, stack_b);
	}
	ft_free(&stack_b);
}
