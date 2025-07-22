/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:38:35 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/22 17:19:21 by clnicola         ###   ########.fr       */
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
	t_stack	*stack_b;
	t_stack	*head;
	stack_a = assign_a(argc, argv);
	if(argc < 2)
		return(0);
	head = stack_a;
	while(stack_a)
	{
		ft_printf("%d\n",stack_a -> nbr);
		stack_a = stack_a->next;
	}
	stack_a = head;
	ft_pb(&stack_a, &stack_b, 1);
	ft_printf("After swap:\n");
	ft_printf("Stack b:\n%d\n",stack_b -> nbr);
	ft_printf("Stack a:\n");
	while(stack_a)
	{
		ft_printf("%d\n",stack_a -> nbr);
		stack_a = stack_a->next;
	}
	return(0);
}
