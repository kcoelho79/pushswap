/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:30:45 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/18 16:41:42 by kde-oliv         ###   ########.fr       */
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
