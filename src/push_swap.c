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
