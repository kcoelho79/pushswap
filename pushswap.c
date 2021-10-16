/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:27:47 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/15 19:06:27 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "Error1\n", 7);
		exit(1);
	}
	createStacks(argv);
	// #todo
	// sort_Stack(stack)
	// free_stack(stack_a);
	// free_stack(stack_b);
	return (0);
}
