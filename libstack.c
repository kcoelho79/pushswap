/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:19:38 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/18 19:37:13 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	insert(t_content *item, int index, t_stack *stack)
{
	t_cell		*new;
	t_content	*pItem;

	new = (t_cell *)malloc(sizeof(t_cell));
	pItem = (t_content *)malloc(sizeof(t_content));
	*(pItem) = *item;
	new->index = index;
	new->item = pItem;
	new->next = stack->top;
	stack->top = new;
	stack->size += 1;
}

int	pop(t_stack *stack)
{
	t_cell	*head;

	if (stack->size <= 0)
		return (1);
	head = stack->top;
	stack->top = head->next;
	stack->size--;
	free(head->item);
	free(head);
}

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
		index = 0;
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

void	fillStack(char **argv, int argc, t_stack *stack)
{	
	int				i;
	t_content		item;
	unsigned int	tmp;

	i = argc - 1;
	while (i >= 1)
	{
		tmp = ft_atoi(argv[i]);
		if (ft_hasdigit(argv[i]))
		{
			if (tmp < -2147483648 || tmp > 2147483647)
				ft_error("Error");
			if (has_duplicates(tmp, argv, i))
				ft_error("Error");
			item.num = ft_atoi(argv[i]);
			insert(&item, -1, stack);
		}
		else
			ft_error("Error");
		i--;
	}
	indexStack(stack);
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
