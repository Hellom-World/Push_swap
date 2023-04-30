/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triagem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:33:53 by heolivei          #+#    #+#             */
/*   Updated: 2023/04/25 14:53:34 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_stringway(char **argv)
{
	t_stack		*a;
	char		**tmp;
	int			i;
	int			j;

	i = 0;
	a = NULL;
	tmp = ft_split(argv[1], 32);
	while (tmp[i])
	{
		j = ft_atoi(tmp[i]);
		ft_add_back(&a, ft_stack_new(j));
		i++;
	}
	//ft_freestr(tmp);
	free(tmp);
	return (a);
}

t_stack	*ft_triagem(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 0;
	a = NULL;
	if (argc < 2)
		ft_error();
	if (argc == 2)
		a = ft_stringway(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atoi(argv[i]);
			ft_add_back(&a, ft_stack_new(j));
			i++;
		}
	}
	return (a);
}
