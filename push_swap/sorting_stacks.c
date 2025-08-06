/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:37:01 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/06 16:22:39 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_stacks(t_stack **stack_a, t_stack **stack_b)
{
	if(ft_stack_size(*stack_a) > 3 && !ft_issorted(*stack_a))
		ft_pb(stack_a,stack_b,1);
	if(ft_stack_size(*stack_a) > 3 && !ft_issorted(*stack_a))
		ft_pb(stack_a,stack_b,1);
	while(ft_stack_size(*stack_a) > 3 && !ft_issorted(*stack_a))
	{
		//ici le gros bordel;
	}
	sort_three(stack_a);
	while(*stack_b)
	{
		
	}
}