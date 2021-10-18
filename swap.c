/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:07:42 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/18 15:19:35 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	swap(t_stack *stack)
{
	t_cell	*head;
	t_cell	*next;
	int		tmp_num;
	int		tmp_index;

	if (stack->size < 2)
		return (-1);
	head = stack->top;
	next = head->next;
	if (!head && !next)
		ft_putendl_fd("Error occured while swapping!", 1);
	tmp_num = head->item->num;
	tmp_index = head->index;
	head->item->num = next->item->num;
	head->index = next->index;
	next->item->num = tmp_num;
	next->index = tmp_index;
	return (0);
}

int	sa(t_stack *stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(t_stack *stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_stack *stack_a, t_stack *stack_b)
{	
	if (stack_a->size < 2 || stack_b->size < 2)
		return (-1);
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}
