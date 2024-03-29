/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-oliv <kde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:21:05 by kde-oliv          #+#    #+#             */
/*   Updated: 2021/10/20 09:08:44 by kde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

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

void		insert(t_content *item, int index, t_stack *stack);
int			pop(t_stack *stack);
void		indexStack(t_stack *stack);
void		fillStack(char **argv, int argc, t_stack *stack);
int			sa(t_stack *stack_a);
int			sb(t_stack *stack_b);
int			ss(t_stack *stack_a, t_stack *stack_b);
int			pa(t_stack *stack_a, t_stack *stack_b);
int			pb(t_stack *stack_a, t_stack *stack_b);
int			ra(t_stack *stack_a);
int			rb(t_stack *stack_b);
int			rr(t_stack *stack_a, t_stack *stack_b);
int			rra(t_stack *stack_a);
int			rrb(t_stack *stack_b);
int			rrr(t_stack *stack_a, t_stack *stack_b);

int			sort(t_stack *stack_a, t_stack *stack_b);
int			simple_sort(t_stack *stack_a, t_stack *stack_b);
void		radix_sort(t_stack *stack_a, t_stack *stack_b);

void		free_stack(t_stack *stack);
void		ft_error(char *msg);
int			has_duplicates(int num, char **argv, int i);
int			is_sorted(t_stack *stack);

#endif