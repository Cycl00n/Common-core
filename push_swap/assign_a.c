/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:13:21 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/09 18:41:54 by clnicola         ###   ########.fr       */
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

t_stack	*assign_a(int argc, char **argv)
{
	t_stack	*stack_a;
	int		i;
	long	j;

	stack_a = NULL;
	i = 1;
	while (i < argc)
	{
		j = ft_atol(argv[i]);
		if (j > 2147483647 || j < -2147483648)
		{
			ft_printf("Error\n");
			return (NULL);
		}
		ft_stackadd_back(&stack_a, ft_stacknew(j));
		i++;
	}
	return (stack_a);
}
