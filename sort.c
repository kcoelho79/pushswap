/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:02:44 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/17 18:02:25 by kde-oliv         ###   ########.fr       */
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
				instruction(stack_a, NULL, "ra");
			else
				instruction(stack_a, stack_b, "pb");
			j++;
		}
		while (stack_b->size != 0)
			instruction(stack_a, stack_b, "pa");
		i++;
	}
}

int	sort(t_stack *stack_a, t_stack *stack_b)
{
	// instruction(stack_a, NULL, "sa");
	// instruction(stack_a, stack_b, "pb");
	// instruction(stack_a, stack_b, "pb");
	// instruction(stack_a, stack_b, "pb");
	// // printstack(stack_a);
	// // printstack(stack_b);
	// instruction(stack_a, NULL, "ra");
	// instruction(NULL, stack_b, "rb");
	// // printstack(stack_a);
	// // printstack(stack_b);
	// instruction(stack_a, NULL, "xa");
	// // printstack(stack_a);
	// instruction(NULL, stack_b, "xb");
	// // printstack(stack_b);
	// instruction(stack_a, NULL, "sa");
	// instruction(stack_a, stack_b, "pa");
	// instruction(stack_a, stack_b, "pa");
	// instruction(stack_a, stack_b, "pa");
	// // printstack(stack_a);
	// // printstack(stack_b);
	radix_sort(stack_a, stack_b);
	// printf("==== inicio sorted ====\n");
	// printstack(stack_a);
}
