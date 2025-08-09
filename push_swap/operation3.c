/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 09:57:18 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/09 17:36:02 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack **stack_a, int flag)
{
	t_stack	*head;
	int		i;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	i = 0;
	head = *stack_a;
	while ((*stack_a)->next)
	{
		*stack_a = (*stack_a)->next;
		i++;
	}
	(*stack_a)->next = head;
	while (i > 1)
	{
		head = head->next;
		i--;
	}
	head->next = NULL;
	if (flag == 1)
		ft_printf("rra\n");
}

void	ft_rrb(t_stack **stack_b, int flag)
{
	t_stack	*head;
	int		i;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		return ;
	i = 0;
	head = *stack_b;
	while ((*stack_b)->next)
	{
		*stack_b = (*stack_b)->next;
		i++;
	}
	(*stack_b)->next = head;
	while (i > 1)
	{
		head = head->next;
		i--;
	}
	head->next = NULL;
	if (flag == 1)
		ft_printf("rrb\n");
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b, int flag)
{
	if (!stack_b || !stack_a || (*stack_b)->next || !(*stack_a)->next)
		return ;
	ft_rra(stack_a, 0);
	ft_rrb(stack_b, 0);
	if (flag == 1)
		ft_printf("rrr\n");
}

void	rotate_stacks(t_stack **stack_a, t_stack **stack_b, t_stack *cheapest)
{
	while (*stack_b != cheapest->target && *stack_a != cheapest)
		ft_rr(stack_a, stack_b, 1);
	give_index(*stack_a);
	give_index(*stack_b);
}

void	rev_rotate_stacks(t_stack **stack_a, t_stack **stack_b,
		t_stack *cheapest)
{
	while (*stack_b != cheapest->target && *stack_a != cheapest)
		ft_rrr(stack_a, stack_b, 1);
	give_index(*stack_a);
	give_index(*stack_b);
}
