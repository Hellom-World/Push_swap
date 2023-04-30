/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:32:31 by heolivei          #+#    #+#             */
/*   Updated: 2023/04/25 14:55:53 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = ft_triagem(argc, argv);
	if (!a || ft_isdup(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_checkordem(a))
	{
		//ft_sort(&a);
	}
	ft_free(&a);
	return (0);
}
