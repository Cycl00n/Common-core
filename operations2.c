/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:30:46 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/22 18:23:23 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **stack_a, int flag)
{
	t_stack	*temp;

	if(!(*stack_a)-> next || !*stack_a)
		return;
	temp = *stack_a;
	ft_stacklast(stack_a);
	(*stack_a) -> next = temp;
	*stack_a = temp -> next;
	if(flag == 1)
		ft_printf("ra\n");
}