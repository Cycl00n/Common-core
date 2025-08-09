/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:41:20 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/09 18:54:19 by clnicola         ###   ########.fr       */
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
	t_stack	*temp;

	if (!(*stack_a))
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)-> next;
	ft_stackadd_front(stack_b, temp);
	if (flag == 1)
		ft_printf("pb\n");
}

void	ft_pa(t_stack **stack_a, t_stack **stack_b, int flag)
{
	t_stack	*temp;

	if (!(*stack_b))
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)-> next;
	ft_stackadd_front(stack_a, temp);
	if (flag == 1)
		ft_printf("pa\n");
}
