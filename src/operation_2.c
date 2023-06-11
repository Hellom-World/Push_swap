/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:03:15 by heolivei          #+#    #+#             */
/*   Updated: 2023/06/11 10:17:55 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_stack **a)
{
	ft_swap(a);
	write(1, "sa\n", 3);
}

void	ft_sb(t_stack **b)
{
	ft_swap(b);
	write(1, "sb\n", 3);
}

void	ft_ss(t_stack **a, t_stack **b)
{
	ft_swap(a);
	ft_swap(b);
	write(1, "ss\n", 3);
}
/*---------------------------------------------------------*/

void	ft_pa(t_stack **dst, t_stack **src)
{
	ft_push(dst, src);
	write(1, "pa\n", 3);
}

void	ft_pb(t_stack **src, t_stack **dst)
{
	ft_push(dst, src);
	write(1, "pb\n", 3);
}
/*---------------------------------------------------------*/
