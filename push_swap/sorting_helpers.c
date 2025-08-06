/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:16:32 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/06 16:22:38 by clnicola         ###   ########.fr       */
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
	int	max;

	max = ft_max(*stack_a);
	if (max == (*stack_a)-> nbr)
		ft_ra(stack_a, 1);
	else if ((*stack_a)-> next -> nbr == max)
		ft_rra(stack_a, 1);
	if ((*stack_a)-> nbr > (*stack_a)-> next -> nbr)
		ft_sa(stack_a, 1);
}
void	give_index(t_stack	*stack)
{
	int 
}