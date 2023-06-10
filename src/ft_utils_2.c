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

long int	ft_long_atoi(const char *str)
{
	int	c;
	int	s;
	long int	res;

	c = 0;
	s = 1;
	res = 0;
	while (str[c] == ' ' || str[c] == '\n' || str[c] == '\t'
		|| str[c] == '\v' || str[c] == '\f' || str[c] == '\r')
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			s = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (res * 10) + (str[c] - 48);
		c++;
	}
	return (res * s);
}

int args_checker(int argc, char **argv)
{
    int i;
    int j;
    i = 1;
    while (argv[i])
    {
        j = 0;
        while(argv[i][j])
        {
            if (!ft_isdigit(argv[i][j]) && argv[i][j] != '-' && argv[i][j] != '+')
                return (0);
            else if ((argv[i][j + 1] == '-') || (argv[i][j + 1] == '+'))
                return (0);
            else if (ft_long_atoi(argv[i]) > INT_MAX || ft_long_atoi(argv[i]) < INT_MIN)
                return (0); 
            j++;
        }
        i++;
    }
    return (1);
}