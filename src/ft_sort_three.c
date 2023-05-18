/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:16:31 by heolivei          #+#    #+#             */
/*   Updated: 2023/05/18 19:00:15 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_three(t_stack **stack_a)
{
	if (ft_nbr_min(*stack_a) == (*stack_a)->nbr)
	{
		ft_rra(stack_a);
		ft_sa(stack_a);
	}
	else if (ft_nbr_max(*stack_a) == (*stack_a)->nbr)
	{
		ft_ra(stack_a);
		if(!ft_checkordem(*stack_a))
			ft_sa(stack_a);
	}
	else
	{
		if (ft_find_index(*stack_a, ft_nbr_max(*stack_a)) == 1)
			ft_rra(stack_a);
		else
			ft_sa(stack_a);
	}
}
