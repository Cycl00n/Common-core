/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helpers3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 17:05:46 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/11 15:54:20 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_match_b(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*a;
	t_stack	*match;
	int		index;

	while (stack_b)
	{
		index = 2147483647;
		a = stack_a;
		while (a)
		{
			if (a->nbr > stack_b->nbr && a->nbr < index)
			{
				index = a->nbr;
				match = a;
			}
			a = a->next;
		}
		if (index == 2147483647)
			stack_b->target = ft_min(stack_a);
		else
			stack_b->target = match;
		stack_b = stack_b->next;
	}
}

void	set_values_b(t_stack *stack_a, t_stack *stack_b)
{
	give_index(stack_a);
	give_index(stack_b);
	find_match_b(stack_a, stack_b);
}
