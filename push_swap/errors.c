/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:04:04 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/06 10:52:01 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	non_digit(char **argv)
{
	int	i;
	int j;

	j = 1;
	i = 0;
	while (argv[j])
	{
		while (argv[j][i])
		{
			if ((ft_isalpha(argv[j][i])))
				return(1);
			i++;
		}
		i = 0;
		j++;
	}
	return (0);
}
int	duplicate_numbers(t_stack *stack_a)
{
	t_stack	*tmp;

	while (stack_a)
	{
		tmp = stack_a -> next;
		while (tmp)
		{
			if (stack_a -> nbr == tmp -> nbr)
				return (1);
			tmp = tmp -> next;
		}
		stack_a = stack_a -> next;
	}
	return (0);
}
