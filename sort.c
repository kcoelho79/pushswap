/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:02:44 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/16 13:38:59 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	sort(t_stack *stack_a, t_stack *stack_b)
{
	instruction(stack_a, NULL, "sa");
	// printf("INSTRUCAO PUSH PB ====\n");
	instruction(stack_a, stack_b, "pb");
	instruction(stack_a, stack_b, "pb");
	instruction(stack_a, stack_b, "pb");
	printstack(stack_a);
	printstack(stack_b);
	

	
	// printstack(stack_b);
	// printstack(stack_a);
	// printf("INSTRUCAO PUSH PA ====\n");
	// instruction(stack_a, stack_b, "pa");
	// printstack(stack_a);
}
