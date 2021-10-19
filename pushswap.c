/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:27:47 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/18 23:12:45 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc == 1)
		exit (0);
	stack_a = (t_stack *)malloc(sizeof(t_stack));
	stack_a->top = NULL;
	stack_a->size = 0;
	stack_b = (t_stack *)malloc(sizeof(t_stack));
	stack_b->top = NULL;
	stack_b->size = 0;
	fillStack(argv, argc, stack_a);
	if (!is_sorted(stack_a))
		sort(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
