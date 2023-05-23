/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:32:31 by heolivei          #+#    #+#             */
/*   Updated: 2023/05/23 19:04:09 by heolivei         ###   ########.fr       */
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
		ft_sort(&a);
	}
	ft_free(&a);
	return (0);
}
