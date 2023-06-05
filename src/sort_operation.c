/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:41:11 by heolivei          #+#    #+#             */
/*   Updated: 2023/06/05 17:42:34 by heolivei         ###   ########.fr       */
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
                        numberToBinary(current_node_a->index);
                        printf("   -- nbr: %ld  | ", current_node_a->nbr);
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
                        printf("nbr: %ld   -- id: %ld  | \n", current_node_a->nbr, current_node_a->index);
                        current_node_b = current_node_b->next;
                }
                 else {
                        printf("\n");
                }

        }
        write(1, "\n", 1);
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
	if (ft_node_len(*stack_a) == 3 && !ft_checkordem(*stack_a))
		ft_sort_three(stack_a);
	printf("-\n");
	if (ft_node_len(*stack_a) == 4 && !ft_checkordem(*stack_a))
        {
                printf("%ld\n", (*stack_a)->index);
                //bit_len(tmp->nbr);
                //printf("%d\n", bit_len(tmp->nbr));
        }
	return (stack_b);
}

void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;

	printList(*stack_a, stack_b);	
	if (ft_node_len(*stack_a) == 2)
	{
		ft_sa(stack_a);
		printList(*stack_a, stack_b);
		printListBinary(*stack_a, stack_b);
	}
	else
	{	
		stack_b = ft_sort_b(stack_a);
		printList(*stack_a, stack_b);
		printListBinary(*stack_a, stack_b);
	}
	ft_free(&stack_b);
}
