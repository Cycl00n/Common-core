/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helpers2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:40:53 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/11 18:00:34 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_cheapest(t_stack *stack)
{
	int		cheapest_cost;
	t_stack	*cheapest;

	if (!stack)
		return ;
	cheapest_cost = 2147483647;
	while (stack)
	{
		if (stack->cost < cheapest_cost)
		{
			cheapest_cost = stack->cost;
			cheapest = stack;
		}
		stack = stack->next;
	}
	cheapest->ischeapest = 1;
}

t_stack	*get_cheapest(t_stack *stack)
{
	while (stack)
	{
		if (stack->ischeapest == 1)
			return (stack);
		stack = stack->next;
	}
	return (0);
}

void	set_values_a(t_stack *stack_a, t_stack *stack_b)
{
	give_index(stack_a);
	give_index(stack_b);
	find_match_a(stack_a, stack_b);
	cost(stack_a, stack_b);
	set_cheapest(stack_a);
}

void	single_rotate_a(t_stack **stack_a, t_stack *head)
{
	if (!head)
		return ;
	while (*stack_a != head)
		if (head->isabovemid == 1)
			ft_ra(stack_a, 1);
	else
		ft_rra(stack_a, 1);
}

void	single_rotate_b(t_stack **stack_b, t_stack *head)
{
	while (*stack_b != head)
		if (head->isabovemid == 1)
			ft_rb(stack_b, 1);
	else
		ft_rrb(stack_b, 1);
}
