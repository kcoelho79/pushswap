/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:29:57 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/20 08:43:36 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	sort2(t_stack *stack)
{
	if (stack->size > 1)
		if (stack->top->index > stack->top->next->index)
			sa(stack);
	return (0);
}

static int	sort3(t_stack *stack)
{
	t_cell	*head;

	head = stack->top;
	if (head->index == 1 && head->next->index == 0)
	{
		sa(stack);
		return (0);
	}
	else
	{
		while (stack->top->index != 2)
			ra(stack);
		ra(stack);
		head = stack->top;
		if (head->index == 1)
			sa(stack);
		return (0);
	}
}

static int	sort4_5(t_stack *stack_a, t_stack *stack_b)
{
	int		i;
	int		size;

	size = stack_a->size;
	i = 0;
	while (i < size)
	{
		if (stack_a->top->index == 3 || stack_a->top->index == 4)
			ra(stack_a);
		else
			pb(stack_a, stack_b);
		i++;
	}
	sort2(stack_a);
	indexStack(stack_b);
	i = stack_b->size - 1;
	while (i >= 0)
	{
		while (stack_b->top->index != i)
			rb(stack_b);
		pa(stack_a, stack_b);
		i--;
	}
}

int	simple_sort(t_stack *stack_a, t_stack *stack_b)
{
	t_cell	*head;
	int		size;

	size = stack_a->size;
	if (size == 2)
		sort2(stack_a);
	if (size == 3)
		sort3(stack_a);
	if (size > 3)
		sort4_5(stack_a, stack_b);
}
