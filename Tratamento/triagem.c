/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triagem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:33:53 by heolivei          #+#    #+#             */
/*   Updated: 2023/06/10 17:48:45 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*copy_arr(const int *src, size_t n)
{
	size_t		i;
	int			*dst;

	dst = malloc((n) * sizeof(int));
	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		(dst)[i] = (src)[i];
		i++;
	}
	return (dst);
}

void	sort_array(int array[], int size)
{
	int	i;
	int	j;
	int	tmp;
	int	min_index;

	i = 0;
	j = 0;
	min_index = 0;
	while (i < size)
	{
		min_index = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min_index])
				min_index = j;
			j++;
		}
		tmp = array[min_index];
		array[min_index] = array[i];
		array[i++] = tmp;
	}
}

int	get_index(int n, int *arr_org, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (n == arr_org[i])
			break ;
		i++;
	}
	return (i + 1);
}

t_stack	*ft_triagem(int *arr, int size)
{
	t_stack	*a;
	int		i;
	int		index;
	int		*arr_copy;

	arr_copy = copy_arr(arr, size);
	sort_array(arr_copy, size);
	i = 0;
	a = NULL;
	if (size < 1)
		return (a);
	else
	{
		while (i < size)
		{
			ft_add_back(&a, ft_stack_new(arr[i],
					get_index(arr[i], arr_copy, size)));
			i++;
		}
	}
	free(arr_copy);
	return (a);
}
