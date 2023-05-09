/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:32:31 by heolivei          #+#    #+#             */
/*   Updated: 2023/05/09 20:27:08 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void printList(t_stack *head)
{
	t_stack *current_node = head;
        while (current_node != NULL)
        {
		printf("nbr: %ld\n", current_node->nbr);
		current_node = current_node->next;
 	}
 }

void	ft_swap(t_stack **head)
{
	 t_stack *tmp;

        if (!*head || !(*head)->next)
                return ;

        tmp = *head;
        *head = (*head)->next;
        tmp->next = (*head)->next;
        (*head)->next = tmp;
}

void	ft_sb(t_stack **b)
{
	t_stack	*tmp;

	if (!*b || !(*b)->next)
		return ;

	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	
	write(1, "sb\n", 3);
}

void	ft_ss(t_stack **a, t_stack **b)
{
	//ft_sa(a);
	ft_sb(b);
}


int	main(int argc, char **argv)
{
	t_stack	*a;

	a = ft_triagem(argc, argv);
	if (!a || ft_isdup(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_checkordem(a))
	{
		printList(a);
		
		//ft_sa(&a);

		printList(a);
		//ft_sort(&a);
	}
	else {
		
		printList(a);
	}
	ft_free(&a);
	return (0);
}
