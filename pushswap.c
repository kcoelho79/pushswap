/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:27:47 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/13 18:06:30 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char *argv[])
{
	int		i;
	int		*list;
	size_t	size;

	if (argc == 1)
	{
		write(1, "Error \n", 7);
		exit(0);
	}
	size = argc - 1;
	list = malloc(size * sizeof(int *));
	i = 1;
	while (argv[i])
	{
		if (ft_hasdigit(argv[i]))
			list[i -1] = ft_atoi(argv[i]);
		else
			write(1, "Error \n", 7);
		i++;
	}
	free(list);
}
