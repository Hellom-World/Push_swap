/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:19:21 by heolivei          #+#    #+#             */
/*   Updated: 2023/06/11 10:56:18 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	long				nbr;
	long				index;
	struct s_stack		*next;
	struct s_stack		*prev;
}	t_stack;

t_stack	*ft_end_node(t_stack *lst);
t_stack	*ft_sort_b(t_stack **stack_a);
t_stack	*ft_triagem(int *arr, int size);
t_stack	*ft_stack_new(int content, int index);

int		bit_len(int nbr);
int		ft_isdup(t_stack *a);
int		ft_nbr_min(t_stack *a);
int		ft_nbr_max(t_stack *a);
int		ft_index_max(t_stack *a);
int		ft_node_len(t_stack *lst);
int		ft_checkordem(t_stack *stack_a);
int		ft_find_index(t_stack *a, int nbr);
int		args_checker(int argc, char **argv);
int		ft_find_place_b(t_stack *stack_b, int nbr_push);

long	int	ft_long_atoi(const char *str);

void	ft_error(void);
void	ft_sa(t_stack **a);
void	ft_ra(t_stack **a);
void	ft_sb(t_stack **b);
void	ft_rb(t_stack **b);
void	ft_rra(t_stack **a);
void	ft_rrb(t_stack **b);
void	ft_free(t_stack **lst);
void	ft_swap(t_stack **head);
void	ft_rotate(t_stack **head);
void	ft_sort(t_stack **stack_a);
void	ft_rev_rotate(t_stack **head);
void	ft_ss(t_stack **a, t_stack **b);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_sort_three(t_stack **stack_a);
void	ft_rrr(t_stack **a, t_stack **b);
void	ft_pa(t_stack **dst, t_stack **src);
void	ft_pb(t_stack **src, t_stack **dst);
void	ft_push(t_stack **dst, t_stack **src);
void	ft_add_back(t_stack **stack, t_stack *stack_new);

#endif
