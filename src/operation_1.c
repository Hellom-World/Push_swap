/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:52:40 by heolivei          #+#    #+#             */
/*   Updated: 2023/06/11 10:24:19 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_stack **head)
{
	t_stack	*tmp;

	if (!*head || !(*head)->next)
		return ;
	tmp = *head;
	*head = (*head)->next;
	tmp->next = (*head)->next;
	(*head)->next = tmp;
}

void	ft_push(t_stack **dst, t_stack **src)
{
	t_stack	*tmp;

	if (!*src)
		return ;
	tmp = *dst;
	*dst = *src;
	*src = (*src)->next;
	(*dst)->next = tmp;
}

void	ft_rotate(t_stack **head)
{
	t_stack	*tmp;

	if (!*head || !(*head)->next)
		return ;
	tmp = *head;
	*head = ft_end_node(*head);
	(*head)->next = tmp;
	*head = tmp->next;
	tmp->next = NULL;
}

void	ft_rev_rotate(t_stack **head)
{
	t_stack		*tmp;
	int			i;

	if (!*head || !(*head)->next)
		return ;
	i = 0;
	tmp = *head;
	while ((*head)->next)
	{
		*head = (*head)->next;
		i++;
	}
	(*head)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
}
/*-------------------------------------------------------------*/

void	ft_rra(t_stack **a)
{
	ft_rev_rotate(a);
	write(1, "rra\n", 4);
}
