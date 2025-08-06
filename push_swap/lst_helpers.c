/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:01:52 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/22 17:37:32 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_stack *lst)
{
	int	min;

	if (!lst)
		return (0);
	min = lst -> nbr;
	while (lst)
	{
		if (lst -> nbr < min)
			min = lst -> nbr;
		lst = lst -> next;
	}
	return (min);
}

int	ft_max(t_stack *lst)
{
	int	max;

	if (!lst)
		return (0);
	max = lst -> nbr;
	while (lst)
	{
		if (lst -> nbr > max)
			max = lst -> nbr;
		lst = lst -> next;
	}
	return (max);
}

int	ft_stack_size(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i ++;
		lst = lst -> next;
	}
	return (i);
}

void	ft_stackadd_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
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
