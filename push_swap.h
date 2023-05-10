#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
    long    nbr;
    long    index;
    struct s_stack  *next;
    struct s_stack  *prev;
}   t_stack;

t_stack *ft_end_node(t_stack *lst);
t_stack *ft_stringway(char **argv);
t_stack *ft_stack_new(int content);
t_stack *ft_triagem(int argc, char **argv);

int ft_isdup(t_stack *a);
int ft_nbr_min(t_stack *a);
int ft_nbr_max(t_stack *a);
int ft_node_len(t_stack *lst);
int ft_checkordem(t_stack *stack_a);

void    ft_error(void);
void    ft_sa(t_stack **a);
void    ft_sb(t_stack **b);
void    ft_ss(t_stack **a, t_stack **b);
void	ft_swap(t_stack **head);
void    ft_free(t_stack **lst);
void    ft_pa(t_stack **dst, t_stack **src);
void    ft_pb(t_stack **src, t_stack **dst);
void    ft_push(t_stack **dst, t_stack **src);
void    ft_add_back(t_stack **stack, t_stack *stack_new);

#endif
