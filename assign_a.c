/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:13:21 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/22 15:15:16 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*assign_a(int argc, char **argv)
{
	t_stack	*stack_a;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = ft_atoi(argv[i]);
		ft_stackadd_back(&stack_a, ft_stacknew(j));
		i++;
	}
	return (stack_a);
}
