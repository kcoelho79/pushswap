/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:21:05 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/15 18:48:15 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

// corrigir
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_content
{
	int	num;
}	t_content;

typedef struct s_cell
{
	t_content		*item;
	struct s_cell	*next;
	int				index;
}	t_cell;

typedef struct s_stack
{
	t_cell	*top;
	int		size;
}	t_stack;

void		createStacks(char **argv);
int			printstack(t_stack *stack);
int			instruction(t_stack *stack_a, t_stack *stack_b, char *inst);
int			sort(t_stack *stack);

#endif