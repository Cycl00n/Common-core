/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:13:21 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/11 17:25:42 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *nptr)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

void	assign_a(t_stack **stack_a, char **argv, int start)
{
	int		i;
	long	j;

	i = start;
	while (argv[i])
	{
		if (error_syntax(argv[i]))
			exit_free(stack_a);
		j = ft_atol(argv[i]);
		if (j > 2147483647 || j < -2147483648)
			exit_free(stack_a);
		if (duplicate_numbers(*stack_a, j))
			exit_free(stack_a);
		ft_stackadd_back(stack_a, ft_stacknew(j));
		i++;
	}
}
