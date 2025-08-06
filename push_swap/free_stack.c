/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:24:23 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/06 13:29:31 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*temp;

	if(!stack)
		return;
	while (temp)
	{
		temp = (*stack)-> next;
		(*stack)-> nbr = 0;
		free(*stack);
		*stack = temp;
	}
}
