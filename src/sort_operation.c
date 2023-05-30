/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:41:11 by heolivei          #+#    #+#             */
/*   Updated: 2023/05/30 18:34:09 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void printList(t_stack *head_a, t_stack *head_b)
{
        t_stack *current_node_a = head_a;
        t_stack *current_node_b = head_b;

         printf("pilha a:             pilha b:\n");
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
                        printf("nbr: %ld   -- id: %ld  | ", current_node_a->nbr, current_node_a->index);
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

	if (ft_node_len(*stack_a) > 3 && !ft_checkordem(*stack_a))
	{
		ft_pb(stack_a, &stack_b);
	}
	if (ft_node_len(*stack_a) > 3 && !ft_checkordem(*stack_a))
        {
                ft_pb(stack_a, &stack_b);
        }
	tmp = *stack_a;
	printf("-\n");
	while (tmp->next != NULL)
	{
		printf("nbr: %ld - ", tmp->nbr);
		printf("id: %d\n", ft_find_place_b(stack_b, tmp->nbr));
		tmp = tmp->next;
		ft_pb(stack_a, &stack_b);
	}
	printf("-\n");
	/*if (ft_node_len(*stack_a) == 3 && !ft_checkordem(*stack_a))
		ft_sort_three(stack_a);
	printf("-\n");
	if (ft_node_len(stack_b) == 1)
                ft_pa(stack_a, &stack_b);*/
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
	}
	else
	{	
		stack_b = ft_sort_b(stack_a);
		printList(*stack_a, stack_b);
	}
	ft_free(&stack_b);
}
