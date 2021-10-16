/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:19:38 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/16 13:33:30 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	insert(t_content *item, t_stack *stack)
{
	t_cell		*new;
	t_content	*pItem;

	new = (t_cell *)malloc(sizeof(t_cell));
	pItem = (t_content *)malloc(sizeof(t_content));
	*(pItem) = *item;
	new->index = -1;
	new->item = pItem;
	new->next = stack->top;
	stack->top = new;
	stack->size += 1;
}

int	pop(t_stack *stack)
{
	t_cell	*head;

	head = stack->top;
	stack->top = head->next;
	stack->size--;
	free(head->item);
	free(head);
	// verificar se é vaizo e tratar erro
}

// todo usar o indexsomente com sort, retirar instruction do push, main
void	indexStack(t_stack *stack)
{
	t_cell	*head;
	t_cell	*tmp;
	int		num;
	size_t	i;
	size_t	index;

	head = stack->top;
	i = 0;
	while (i < stack->size)
	{
		index = 1;
		num = head->item->num;
		tmp = stack->top;
		while (tmp != NULL)
		{
			if (num > tmp->item->num)
				index++;
			tmp = tmp->next;
		}
		head->index = index;
		head = head->next;
		i++;
	}
}

static void	fillStack(char **argv, t_stack *stack)
{	
	int			i;
	t_content	item;

	i = 1;
	while (argv[i])
	{
		if (ft_hasdigit(argv[i]))
		{
			item.num = ft_atoi(argv[i]);
			insert(&item, stack);
		}
		else
			write(1, "Error2\n", 7);
		i++;
	}
	indexStack(stack);
	// printstack(stack);
}

void	createStacks(char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = (t_stack *)malloc(sizeof(t_stack));
	stack_a->top = NULL;
	stack_a->size = 0;
	stack_b = (t_stack *)malloc(sizeof(t_stack));
	stack_b->top = NULL;
	stack_b->size = 0;
	fillStack(argv, stack_a);
	sort(stack_a, stack_b);
}

int	printstack(t_stack *stack)
{
	t_cell	*head;

	head = stack->top;
	printf("tamanho da pilha %i\n", stack->size);
	while (head != NULL)
	{
		printf("num[%d] index[%d]\n", head->item->num, head->index);
		head = head->next;
	}
	return (0);
}
