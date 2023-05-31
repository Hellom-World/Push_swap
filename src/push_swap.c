/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:32:31 by heolivei          #+#    #+#             */
/*   Updated: 2023/05/31 18:57:19 by heolivei         ###   ########.fr       */
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

int	main(int argc, char **argv)
{

	//Organizando por index
	
	int	*arr;
	int	i;

	arr = malloc((argc - 1) * sizeof(int));//original
	
	i = 0;
	while (i < argc - 1)
	{
		arr[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	
	t_stack	*a;
	//criar a 4com index!
	a = ft_triagem(arr, argc - 1);
	/*if (!a || ft_isdup(a))
	{
		ft_free(&a);
		ft_error();
	}*/
	if (!ft_checkordem(a))
	{
		ft_sort(&a);
	}
	ft_free(&a);
	return (0);
}
