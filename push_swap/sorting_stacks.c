/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:37:01 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/11 15:54:32 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_stacks(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stack_size(*stack_a) > 3 && !ft_issorted(*stack_a))
		ft_pb(stack_a, stack_b, 1);
	if (ft_stack_size(*stack_a) > 3 && !ft_issorted(*stack_a))
		ft_pb(stack_a, stack_b, 1);
	while (ft_stack_size(*stack_a) > 3 && !ft_issorted(*stack_a))
	{
		set_values_a(*stack_a, *stack_b);
		to_b(stack_a, stack_b);
	}
	sort_three(stack_a);
	while (*stack_b)
	{
		set_values_b(*stack_a, *stack_b);
		to_a(stack_a, stack_b);
	}
	give_index(*stack_a);
	ascending_order(stack_a);
}

void	to_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*cheapest;

	cheapest = get_cheapest(*stack_a);
	if (cheapest->isabovemid == 1 && cheapest->target->isabovemid == 1)
		rotate_stacks(stack_a, stack_b, cheapest);
	else if (cheapest->isabovemid == 0 && cheapest->target->isabovemid == 0)
		rev_rotate_stacks(stack_a, stack_b, cheapest);
	single_rotate_a(stack_a, cheapest);
	single_rotate_b(stack_b, cheapest->target);
	ft_pb(stack_a, stack_b, 1);
}

void	to_a(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_b && (*stack_b)->target)
		single_rotate_a(stack_a, (*stack_b)->target);
	ft_pa(stack_a, stack_b, 1);
}

void	ascending_order(t_stack **stack_a)
{
	give_index(*stack_a);
	while ((*stack_a)->nbr != ft_min(*stack_a)->nbr)
	{
		if (ft_min(*stack_a)->isabovemid == 1)
			ft_ra(stack_a, 1);
		else
			ft_rra(stack_a, 1);
	}
}
