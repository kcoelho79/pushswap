/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:58:58 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/17 15:50:12 by kde-oliv         ###   ########.fr       */
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

static int	push(t_stack *stack_from, t_stack *stack_to)
{
	t_content		*pItem;
	int				index;

	// todo verificar erro tamanho stack 
	if (stack_from->size < 1)
		return (-1);
	pItem = stack_from->top->item;
	index = stack_from->top->index;
	insert(pItem, index, stack_to);
// 	indexStack(stack_to);
	pop(stack_from);
// 	indexStack(stack_from);
	// printstack(stack_from);
	// printstack(stack_to);
	return (0);
}

static int	rotate(t_stack *stack)
{
	t_cell	*head;
	t_cell	*tail;

	head = stack->top;
	tail = stack->top;
	while (tail->next)
		tail = tail->next;
	stack->top = head->next;
	head->next = NULL;
	tail->next = head;
// 	printstack(stack);
	return (0);
}

static int	reverseRotate(t_stack *stack)
{
	t_cell	*head;
	t_cell	*tail;

	head = stack->top;
	tail = stack->top;
	while (tail->next)
		tail = tail->next;
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = stack->top;
	stack->top = tail;
	return (0);
}

int	instruction(t_stack *stack_a, t_stack *stack_b, char *inst)
{
	write(1, inst, 2);
	write(1, "\n", 1);
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
	if (inst[0] == 'r' && inst[1] == 'a')
		rotate(stack_a);
	if (inst[0] == 'r' && inst[1] == 'b')
		rotate(stack_b);
	if (inst[0] == 'r' && inst[1] == 'r')
	{
		rotate(stack_a);
		rotate(stack_b);
	}
	if (inst[0] == 'x' && inst[1] == 'a')
		reverseRotate(stack_a);
	if (inst[0] == 'x' && inst[1] == 'b')
		reverseRotate(stack_b);
	if (inst[0] == 'r' && inst[1] == 'r' && inst[2] =='r')
	{
		reverseRotate(stack_a);
		reverseRotate(stack_b);
	}		
	return (0);
}
