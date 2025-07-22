/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:41:20 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/22 17:20:43 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **stack_a, int flag)
{
	t_stack	*temp;

	if (!(*stack_a)-> next || !stack_a)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)-> next;
	temp -> next = (*stack_a)-> next;
	(*stack_a)-> next = temp;
	if (flag == 1)
		ft_printf("sa\n");
}

void	ft_sb(t_stack **stack_b, int flag)
{
	t_stack	*temp;

	if (!(*stack_b) ||! (*stack_b)-> next)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)-> next;
	temp -> next = (*stack_b)-> next;
	(*stack_b)-> next = temp;
	if (flag == 1)
		ft_printf("sb\n");
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b, int flag)
{
	t_stack	*temp;

	if (!*stack_a ||!*stack_b ||!(*stack_a)->next ||!(*stack_b)->next)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)-> next;
	temp -> next = (*stack_a)-> next;
	(*stack_a)-> next = temp;
	temp = *stack_b;
	*stack_b = (*stack_b)-> next;
	temp -> next = (*stack_b)-> next;
	(*stack_b)-> next = temp;
	if (flag == 1)
		ft_printf("ss\n");
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b, int flag)
{
	t_stack	*tmp;

	if (!(*stack_a))
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)-> next;
	tmp -> next = NULL;
	ft_stackadd_front(stack_b, tmp);
	if (flag == 1)
		ft_printf("pb\n");
}
