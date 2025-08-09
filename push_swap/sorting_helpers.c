/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:16:32 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/09 19:30:37 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_issorted(t_stack *stack)
{
	int	nbr;

	nbr = stack->nbr;
	while (stack)
	{
		if (nbr > stack->nbr)
			return (0);
		nbr = stack->nbr;
		stack = stack->next;
	}
	return (1);
}

void	sort_three(t_stack **stack_a)
{
	t_stack	*max;

	max = ft_max(*stack_a);
	if (max->nbr == (*stack_a)->nbr)
		ft_ra(stack_a, 1);
	else if ((*stack_a)->next->nbr == max->nbr)
		ft_rra(stack_a, 1);
	if ((*stack_a)->nbr > (*stack_a)->next->nbr)
		ft_sa(stack_a, 1);
}

void	give_index(t_stack *stack)
{
	int	i;
	int	mid;

	i = 0;
	mid = ft_stack_size(stack) / 2;
	if (!stack)
		return ;
	while (stack)
	{
		stack->index = i;
		if (mid <= i)
			stack->isabovemid = 1;
		else
			stack->isabovemid = 0;
		i++;
		stack = stack->next;
	}
}

void	find_match_a(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*b;
	t_stack	*match;
	int		index;

	while (stack_a)
	{
		index = -1;
		b = stack_b;
		while (b)
		{
			if (b->nbr < stack_a->nbr && b->nbr > index)
			{
				index = b->nbr;
				match = b;
			}
			b = b->next;
		}
		if (index == -1)
			stack_a->target = ft_max(stack_b);
		else
			stack_a->target = match;
		stack_a = stack_a->next;
	}
}

void	cost(t_stack *stack_a, t_stack *stack_b)
{
	int	lenght_a;
	int	lenght_b;

	lenght_a = ft_stack_size(stack_a);
	lenght_b = ft_stack_size(stack_b);
	while (stack_a)
	{
		stack_a->cost = stack_a->index;
		if (stack_a->isabovemid == 0)
			stack_a->cost = lenght_a - (stack_a->index);
		if (stack_a->target->isabovemid == 1)
			stack_a->cost += stack_a->target->index;
		else
			stack_a->cost += lenght_b - (stack_a->target->index);
		stack_a = stack_a->next;
	}
}
