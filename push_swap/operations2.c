/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:30:46 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/24 11:29:46 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **stack_a, int flag)
{
	t_stack	*head;
	t_stack	*end;

	if(!(*stack_a)-> next || !*stack_a)
		return;
	head = *stack_a;
	end = ft_stacklast(*stack_a);
	end -> next = head;
	*stack_a = head -> next;
	head -> next = NULL;
	if(flag == 1)
		ft_printf("ra\n");
}

void	ft_rb(t_stack **stack_b, int flag)
{
	t_stack	*head;
	t_stack	*end;

	if(!stack_b || !(*stack_b)-> next)
		return;
	head = *stack_b;
	end = ft_stacklast(stack_b);
	end -> next = head;
	stack_b = head -> next;
	head -> next = NULL;
	if(flag == 1)
		ft_printf("rb\n");
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b, int flag)
{
	t_stack	head;
	t_stack	end;
}