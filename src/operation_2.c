/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:03:15 by heolivei          #+#    #+#             */
/*   Updated: 2023/05/11 21:39:01 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ft_sa(t_stack **a)
{
        ft_swap(a);

        write(1, "sa\n", 3);
}

void    ft_sb(t_stack **b)
{
        ft_swap(b);

        write(1, "sb\n", 3);
}

void    ft_ss(t_stack **a, t_stack **b)
{
        ft_swap(a);
	ft_swap(b);

        write(1, "ss\n", 3);
}
/*---------------------------------------------------------*/

void    ft_pa(t_stack **dst, t_stack **src)
{
        ft_push(dst, src);
        write(1, "pa\n", 3);
}

void    ft_pb(t_stack **src, t_stack **dst)
{
        ft_push(dst, src);
        write(1, "pb\n", 3);
}

/*---------------------------------------------------------*/

void    ft_ra(t_stack **a)
{
        ft_rotate(a);

        write(1, "ra\n", 3);
}

void    ft_rb(t_stack **b)
{
        ft_rotate(b);

        write(1, "rb\n", 3);
}

void    ft_rr(t_stack **a, t_stack **b)
{
        ft_rotate(a);
	ft_rotate(b);

        write(1, "rr\n", 3);
}

/*-------------------------------------------------------------*/

void    ft_rra(t_stack **a)
{
        ft_rev_rotate(a);

        write(1, "rra\n" , 4);
}

void    ft_rrb(t_stack **b)
{
        ft_rev_rotate(b);

        write(1, "rrb\n" , 4);
}

void    ft_rrr(t_stack **a, t_stack **b)
{
        ft_rev_rotate(a);
        ft_rev_rotate(b);

        write(1, "rrr\n" , 4);
}
