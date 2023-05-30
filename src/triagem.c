/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triagem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:33:53 by heolivei          #+#    #+#             */
/*   Updated: 2023/05/30 18:31:12 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
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
*/

int     *copy_arr(const int *src, size_t n)
{
        size_t  i;
        int     *dst;

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

void sort_array(int array[], int size) {

        int     i;
        int     j;
        int     tmp;
        int     minIndex;

        i = 0;
        j = 0;
        minIndex = 0;

        while (i < size)
        {
                minIndex = i;
                j = i + 1;
                while (j < size)
                {
                        if (array[j] < array[minIndex])
                                minIndex = j;
                        j++;
                }
                tmp = array[minIndex];
                array[minIndex] = array[i];
                array[i++] = tmp;
        }
}


int     get_index(int n, int *arr_org, int size)
{
        int     i;

        i = 0;
        while (i < size)
        {
                if (n == arr_org[i])
                        break ;
                i++;
        }
        return (i);
}

t_stack	*ft_triagem(int *arr, int size)
{
	t_stack	*a;
	int		i;
	int		index;
	int		*arr_copy;

	i = 0;
	while (i < size)
        {
                printf("%d - ", arr[i]);
                i++;
        }
        printf("\n");
        arr_copy = copy_arr(arr, size);
	i = 0;
        while (i < size)
        {
                printf("%d - ", arr_copy[i]);
                i++;
        }
        sort_array(arr_copy, size);
        i = 0;
        printf("\nArray_copy organizado: \n");
        while (i < size)
        {
                printf(" %d - ", arr_copy[i]);
                i++;
        }
	i = 0;
	a = NULL;

	if (size < 1)
		ft_error();
	else
	{
		printf("\n");
		while (i < size)
		{
			printf(" %d -", arr[i]);
			ft_add_back(&a, ft_stack_new(arr[i], get_index(arr_copy[i], arr, size)));
			i++;
		}
	}
	printf("\n");
	return (a);
}
