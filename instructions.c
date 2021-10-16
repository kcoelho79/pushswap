/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:58:58 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/16 13:11:41 by kde-oliv         ###   ########.fr       */
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

int static	push(t_stack *stack_from, t_stack *stack_to)
{
	t_content		*pItem;

	// todo verificar erro tamanho stack 
	if (stack_from->size < 1)
		return (-1);
	pItem = stack_from->top->item;
	insert(pItem, stack_to);
	indexStack(stack_to);
	pop(stack_from);
	indexStack(stack_from);
}

int	instruction(t_stack *stack_a, t_stack *stack_b, char *inst)
{
	if (inst[0] == 's' && inst[1] == 'a')
		swap(stack_a);
	if (inst[0] == 's' && inst[1] == 'b')
		swap(stack_a);
	if (inst[0] == 's' && inst[1] == 's')
	{
		swap(stack_a);
		swap(stack_b);
	}
	if (inst[0] == 'p' && inst[1] == 'a')
		push(stack_b, stack_a);
	if (inst[0] == 'p' && inst[1] == 'b')
		push(stack_a, stack_b);
	write(1, inst, 2);
	write(1, " ", 1);
	return (0);
}
