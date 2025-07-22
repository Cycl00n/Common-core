/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:38:35 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/22 15:00:32 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int push_swap(int arg_count, ...)
{
	va_list	arg;
	int	a;
	int value;
	
	va_start(arg, arg_count);
	for(a = 0; a < arg_count; a++)
	{
		value = va_arg(arg, int);
		ft_printf("%d \n", value);
	}
	va_end(arg);
	return(0);
}

int main(int argc, char **argv)
{
	t_stack	*stack_a;
	stack_a = assign_A(argc, argv);
	ft_printf("min: %d\n", ft_min(stack_a));
	ft_printf("max: %d\n", ft_max(stack_a));
	ft_printf("Length: %d\n", ft_stack_size(stack_a));
	if(argc < 2)
		return(0);
	while(stack_a -> next)
	{
		ft_printf("%d\n",stack_a -> nbr);
		stack_a = stack_a->next;
	}
	if(!stack_a -> next)
		ft_printf("%d\n", stack_a -> nbr);
	return(0);
}
