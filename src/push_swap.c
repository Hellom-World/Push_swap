/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:32:31 by heolivei          #+#    #+#             */
/*   Updated: 2023/06/10 17:30:33 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	int		*arr;
	int		i;

	if (argc > 1)
	{
		arr = malloc((argc - 1) * sizeof(int));
		i = -1;
		while ((++i < argc - 1))
		{
			arr[i] = ft_long_atoi(argv[i + 1]);
		}
		a = ft_triagem(arr, argc - 1);
		if (!a || ft_isdup(a) || !args_checker(argc, argv))
		{
			free(arr);
			ft_free(&a);
			ft_error();
		}
		else if (!ft_checkordem(a))
			ft_sort(&a);
		ft_free(&a);
		free(arr);
	}
	return (0);
}
