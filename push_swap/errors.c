/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:04:04 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/11 17:26:02 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_syntax(char *str)
{
	if (!(*str == '+'
			|| *str == '-'
			|| (*str >= '0' && *str <= '9')))
		return (1);
	if ((*str == '+'
			|| *str == '-')
		&& !(str[1] >= '0' && str[1] <= '9'))
		return (1);
	while (*++str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (1);
	}
	return (0);
}

int	duplicate_numbers(t_stack *stack_a, int nbr)
{
	if (!stack_a)
		return (0);
	while (stack_a)
	{
		if (stack_a->nbr == nbr)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}

void	exit_free(t_stack **stack_a)
{
	free_stack(stack_a);
	ft_printf("Error\n");
	exit(1);
}
