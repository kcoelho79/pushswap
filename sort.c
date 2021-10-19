/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:02:44 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/18 23:07:39 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	get_max_bits(t_stack *stack)
{
	t_cell	*head;
	int		max;
	int		max_bits;

	head = stack->top;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	t_cell	*head_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	head_a = stack_a->top;
	size = stack_a->size;
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			head_a = stack_a->top;
			if (((head_a->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (stack_b->size != 0)
			pa(stack_a, stack_b);
		i++;
	}
}

static int	meu(t_stack *stack_a, t_stack *stack_b)
{
	t_cell	*head;
	int		i;

	i = 0;
	head = stack_a->top;
	while (head != NULL)
	{
		if (head->index == i)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
		head = stack_a->top;
	}
	while (i > 0)
	{
		pa(stack_a, stack_b);
		i--;
	}
}

int	sort(t_stack *stack_a, t_stack *stack_b)
{
	//printstack(stack_a);
	if (stack_a->size <= 5)
		meu(stack_a, stack_b);
	// // 	simple_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
	// printstack(stack_a);
}
