/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:07:17 by heolivei          #+#    #+#             */
/*   Updated: 2023/06/11 10:24:00 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack **a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack **b)
{
	ft_rotate(b);
	write(1, "rb\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	write(1, "rr\n", 3);
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_rev_rotate(a);
	ft_rev_rotate(b);
	write(1, "rrr\n", 4);
}

void	ft_rrb(t_stack **b)
{
	ft_rev_rotate(b);
	write(1, "rrb\n", 4);
}
