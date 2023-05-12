/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:32:31 by heolivei          #+#    #+#             */
/*   Updated: 2023/05/12 13:39:25 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

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

int	main(int argc, char **argv)
{
	/*stack b de test*/
		t_stack	*b = NULL;
		/*int	i = 0;

		while (i < 4)
		{
			ft_add_back(&b, ft_stack_new(i));
			i++;
		}*/


	/*stack b de test*/
	t_stack	*a;

	a = ft_triagem(argc, argv);
	if (!a || ft_isdup(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_checkordem(a))
	{
		/*printList(a, b);
		ft_sb(&b);
		printList(a, b);
		ft_sa(&a);
		printList(a, b);
		ft_ss(&a, &b);
		printList(a, b);*/

		/*printList(a, b);
		ft_pa(&a, &b);
		printList(a, b);
		ft_pb(&a, &b);
		printList(a, b);*/

		/*printList(a, b);
		ft_ra(&a);
		printList(a, b);
		ft_rb(&b);
		printList(a, b);
		ft_rr(&a, &b);
		printList(a, b);*/
		

		/*printList(a, b);
		ft_rra(&a);
		printList(a, b);
		ft_rrb(&b);
                printList(a, b);
		ft_rrr(&a, &b);
                printList(a, b);*/

		printList(a, b);
		ft_pb(&a, &b);
		ft_pb(&a, &b);
		printList(a, b);

		ft_rb(&b);
		ft_pb(&a, &b);
		printList(a, b);

		ft_pb(&a, &b);
		ft_rb(&b);
		printList(a, b);
		
		ft_rra(&a);
		ft_pb(&a, &b);
		printList(a, b);

		ft_ra(&a);
                ft_ra(&a);
		ft_pb(&a, &b);
                printList(a, b);
		//ft_sort(&a);

	}
	else {
		
		printList(a, b);
	}
	ft_free(&a);
	ft_free(&b);
	return (0);
}
