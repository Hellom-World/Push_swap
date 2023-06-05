/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:10:39 by heolivei          #+#    #+#             */
/*   Updated: 2023/05/30 12:24:26 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_find_place_b(t_stack *stack_b, int nbr_push)
{
    int i;
    t_stack *tmp;
    i = 1;

    if (stack_b == NULL) {
        // Tratar o caso em que a pilha stack_b é nula
        // Retornar um valor adequado ou tomar alguma ação apropriada
        return -1; // Por exemplo, retornar um valor de erro
    }

    if (nbr_push > stack_b->nbr && nbr_push < ft_end_node(stack_b)->nbr)
        i = 0;
    else if (nbr_push > ft_nbr_max(stack_b))
        i = ft_find_index(stack_b, ft_nbr_max(stack_b));
    else
    {
        tmp = stack_b->next;
        while (stack_b && tmp && (stack_b->nbr < nbr_push || tmp->nbr > nbr_push))
        {
            stack_b = stack_b->next;
            tmp = stack_b->next;
            i++;
        }
    }
    return (i);
}

int bit_len(int nbr) {
    int i = 0;

    while (nbr > 0) {
        i++;
        nbr = nbr >> 1;
    }

    return (i);
}

