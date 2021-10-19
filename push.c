/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:27:21 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/18 22:31:25 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	push(t_stack *stack_to, t_stack *stack_from)
{
	t_content		*pItem;
	int				index;

	if (stack_from->size == 0)
		return (-1);
	pItem = stack_from->top->item;
	index = stack_from->top->index;
	insert(pItem, index, stack_to);
	pop(stack_from);
	return (0);
}

int	pa(t_stack *stack_a, t_stack *stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_stack *stack_a, t_stack *stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}
