/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:30:45 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/18 19:42:27 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	free_stack(t_stack *stack)
{
	t_cell		*head;
	t_cell		*tmp;
	t_content	*item;

	head = stack->top;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->item);
		free(tmp);
	}
	free(stack);
}

void	ft_error(char *msg)
{
	ft_putendl_fd(msg, 1);
	exit(0);
}

int	has_duplicates(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

int	is_sorted(t_stack *stack)
{
	t_cell	*head;

	head = stack->top;
	while (head && head->next)
	{
		if (head->item->num > head->next->item->num)
			return (0);
		head = head->next;
	}
	return (1);
}
