/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:52:40 by heolivei          #+#    #+#             */
/*   Updated: 2023/05/10 20:50:31 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ft_swap(t_stack **head)
{
	t_stack *tmp;

        if (!*head || !(*head)->next)
                return ;

        tmp = *head;
        *head = (*head)->next;
        tmp->next = (*head)->next;
        (*head)->next = tmp;
}

void    ft_push(t_stack **dst, t_stack **src)
{
        t_stack *tmp;

        if (!*src)
                return ;
        tmp = *dst;
        *dst = *src;
        *src = (*src)->next;
        (*dst)->next = tmp;
}
