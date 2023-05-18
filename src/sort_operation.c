/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:41:11 by heolivei          #+#    #+#             */
/*   Updated: 2023/05/18 19:07:13 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void printList(t_stack *head_a, t_stack *head_b)
{
        t_stack *current_node_a = head_a;
        t_stack *current_node_b = head_b;

         printf("pilha a:     pilha b:\n");
        while (current_node_a != NULL || current_node_b != NULL)
        {
                if(current_node_a != NULL)
                {
                        printf("nbr: %ld     | ", current_node_a->nbr);
                        current_node_a = current_node_a->next;
                }
                else {
                        printf("           | ");
                }
                if(current_node_b != NULL)
                {
                        printf("nbr: %ld\n", current_node_b->nbr);
                        current_node_b = current_node_b->next;
                }
                 else {
                        printf("\n");
                }

        }
        write(1, "\n", 1);
}


void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;

	if(ft_node_len(*stack_a))
	{
		ft_sort_three(stack_a);
		printList(*stack_a, stack_b);
	}
	ft_free(&stack_b);
}
