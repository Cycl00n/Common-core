/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:16:32 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/06 13:21:21 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_issorted(t_stack *stack)
{
	int	nbr;

	nbr = stack -> nbr;
	while(stack)
	{
		if(nbr > stack -> nbr)
			return(0);
		nbr = stack -> nbr;
		stack = stack -> next;
	}
	return(1);
}
void	sort_three(t_stack **stack_a)
{
	if(ft_stacklast(*stack_a)-> nbr == ft_max(*stack_a))
			ft_sa(stack_a, 1);
}
