/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:38:35 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/06 14:41:04 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack	*stack_a = NULL;
	t_stack	*stack_b = NULL;
	t_stack	*head;
	if (argc < 2)
		return (0);
	stack_a = assign_a(argc, argv);
	if(!stack_a)
		return(0);
	if(non_digit(argv) || duplicate_numbers(stack_a))
	{
		ft_printf("Error\n");
		return(0);
	}
	head = stack_a;
	while(stack_a)
	{
		ft_printf("%d\n",stack_a -> nbr);
		stack_a = stack_a->next;
	}
	stack_a = head;
	if (!ft_issorted(stack_a))
	{
		if (ft_stack_size(stack_a) == 2)
			ft_sa(&stack_a, 1);
		else if (ft_stack_size(stack_a) == 3)
			sort_three(&stack_a);
		else
			sorting_stacks(&stack_a, &stack_b);
	}
	head = stack_a;
	while(stack_a)
	{
		ft_printf("%d\n",stack_a -> nbr);
		stack_a = stack_a->next;
	}
	stack_a = head;
	free_stack(&stack_a);
	return(0);
}
