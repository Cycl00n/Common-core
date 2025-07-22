/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:01:52 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/22 14:59:22 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*assign_A(int argc, char **argv)
{
	t_stack *stack_a;
	int	i = 1;
	int j;

	while(i < argc)
	{
		j = ft_atoi(argv[i]);
		ft_stackadd_back(&stack_a, ft_stacknew(j));
		i++;
	}
	return(stack_a);
}

void	ft_stackadd_back(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		ft_stacklast(*lst)->next = new;
}
t_stack	*ft_stacklast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

t_stack	*ft_stacknew(int content)
{
	t_stack	*new_node;

	new_node = (t_stack *) malloc (sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node -> nbr = content;
	new_node -> next = NULL;
	return (new_node);
}
int	ft_min(t_stack *lst)
{
	int min;
	if(!lst)
		return(0);
	min = lst -> nbr;
	while (lst)
	{
		if(lst -> nbr < min)
			min = lst -> nbr;
		lst = lst -> next;
	}
	return(min);
}

int	ft_max(t_stack *lst)
{
	int max;
	if(!lst)
		return(0);
	max = lst -> nbr;
	while (lst)
	{
		if(lst -> nbr > max)
			max = lst -> nbr;
		lst = lst -> next;
	}
	return(max);
}

int	ft_stack_size(t_stack *lst)
{
	int i;

	i = 0;
	while (lst)
	{
		i ++;
		lst = lst -> next;
	}
	return(i);
}