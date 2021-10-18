/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:27:47 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/17 18:47:23 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putendl_fd("Error", 1);
		// write(1, "Error", 5);
		exit(0);
	}
	createStacks(argv, argc);

	// #todo
	// free_stack(stack_a);
	// free_stack(stack_b);
	return (0);
}
