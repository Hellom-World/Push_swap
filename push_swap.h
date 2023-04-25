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

t_stack ft_end_node(t_stack *lst);
t_stack *ft_stringway(char **argv);
t_stack *ft_stack_new(int content);
t_stack *ft_triagem(int argc, char **argv);

int ft_isdup(t_stack *a);
int ft_nbr_min(t_stack *a);
int ft_nbr_max(t_stack *a);
int ft_node_len(t_stack *lst);
int ft_checkordem(t_stack *stack_a);

void    ft_error(void);
void    ft_free(t_stack **lst);
void    ft_add_back(t_stack **stack, t_stack *stack_new);

#endif