/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:32:31 by heolivei          #+#    #+#             */
/*   Updated: 2023/05/16 19:59:43 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	/*stack b de test*/
		//t_stack	*b = NULL;
		/*int	i = 0;

		while (i < 4)
		{
			ft_add_back(&b, ft_stack_new(i));
			i++;
		}*/


	/*stack b de test*/
	t_stack	*a;

	a = ft_triagem(argc, argv);
	if (!a || ft_isdup(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_checkordem(a))
	{
		/* Teste das operacoes principais */
		/*printList(a, b);
		ft_sb(&b);
		printList(a, b);
		ft_sa(&a);
		printList(a, b);
		ft_ss(&a, &b);
		printList(a, b);*/

		/*printList(a, b);
		ft_pa(&a, &b);
		printList(a, b);
		ft_pb(&a, &b);
		printList(a, b);*/

		/*printList(a, b);
		ft_ra(&a);
		printList(a, b);
		ft_rb(&b);
		printList(a, b);
		ft_rr(&a, &b);
		printList(a, b);*/
		

		/*printList(a, b);
		ft_rra(&a);
		printList(a, b);
		ft_rrb(&b);
                printList(a, b);
		ft_rrr(&a, &b);
                printList(a, b);*/

		/* teste e estudo do algoritmo */

		/*printList(a, b);
		ft_pb(&a, &b);
		ft_pb(&a, &b);
		printList(a, b);

		ft_rb(&b);
		ft_pb(&a, &b);
		printList(a, b);

		ft_pb(&a, &b);
		ft_rb(&b);
		printList(a, b);
		
		ft_rra(&a);
		ft_pb(&a, &b);
		printList(a, b);

		ft_ra(&a);
                ft_ra(&a);
		ft_pb(&a, &b);
                printList(a, b);

		ft_rra(&a);
		printList(a, b);

		ft_pa(&a,&b);
		ft_pa(&a,&b);
		ft_pa(&a,&b);
		
		printList(a, b);
		
		ft_rra(&a);
		ft_pa(&a, &b);
		printList(a, b);

		ft_rra(&a);
                ft_rra(&a);
                printList(a, b);

		ft_pa(&a, &b);
		ft_pa(&a, &b);
                printList(a, b);*/
		ft_sort(&a);

	}
	/*else {
		
	}*/
	ft_free(&a);
	return (0);
}
