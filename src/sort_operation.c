/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:41:11 by heolivei          #+#    #+#             */
/*   Updated: 2023/06/11 10:44:21 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*min_nbr_to_top(t_stack *stack_a)
{
	int	min;

	min = ft_nbr_min(stack_a);
	if (ft_find_index(stack_a, min) <= (ft_node_len(stack_a) / 2))
	{
		while (stack_a->nbr != ft_nbr_min(stack_a))
			ft_ra(&stack_a);
	}
	else
	{
		while (stack_a->nbr != ft_nbr_min(stack_a))
			ft_rra(&stack_a);
	}
	return (stack_a);
}

t_stack	*ft_little_sort(t_stack *a, t_stack *b)
{
	while (ft_node_len(a) > 3)
	{
		a = min_nbr_to_top(a);
		ft_pb(&a, &b);
	}
	if (!ft_checkordem(a))
		ft_sort_three(&a);
	while (ft_node_len(b))
		ft_pa(&a, &b);
	return (a);
}

t_stack	*ft_big_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	bit_position;

	i = bit_len(ft_index_max(a));
	j = ft_node_len(a);
	bit_position = 0;
	while (i)
	{
		j = ft_node_len(a);
		while (j > 0)
		{
			if (((a->index >> bit_position) & 1) == 0)
				ft_pb(&a, &b);
			else
				ft_ra(&a);
			j--;
		}
		while (ft_node_len(b))
			ft_pa(&a, &b);
		bit_position++;
		i--;
	}
	return (a);
}

t_stack	*ft_sort_b(t_stack **stack_a)
{
	t_stack	*stack_b;
	t_stack	*tmp;

	stack_b = NULL;
	tmp = *stack_a;
	if (ft_node_len(*stack_a) < 6 && !ft_checkordem(*stack_a))
		*stack_a = ft_little_sort(*stack_a, stack_b);
	else
		*stack_a = ft_big_sort(*stack_a, stack_b);
	return (stack_b);
}

void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	t_stack	*tmp;

	stack_b = NULL;
	if (ft_node_len(*stack_a) == 2)
		ft_sa(stack_a);
	else if (ft_node_len(*stack_a) == 3 && !ft_checkordem(*stack_a))
		ft_sort_three(stack_a);
	else
		stack_b = ft_sort_b(stack_a);
	ft_free(&stack_b);
}
