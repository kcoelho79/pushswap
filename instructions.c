/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:58:58 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/15 18:47:52 by kde-oliv         ###   ########.fr       */
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
	tmp_num = head->item->num;
	tmp_index = head->index;
	head->item->num = next->item->num;
	head->index = next->index;
	next->item->num = tmp_num;
	next->index = tmp_index;
	return (0);
}

int	instruction(t_stack *stack_a, t_stack *stack_b, char *inst)
{
	if (inst[1] == 'a')
		swap(stack_a);
	if (inst[1] == 'b')
		swap(stack_b);
	return (0);
}
