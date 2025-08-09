/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_helpers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:01:52 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/09 17:28:29 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_min(t_stack *lst)
{
	t_stack	*min;

	if (!lst)
		return (0);
	min = lst;
	while (lst)
	{
		if (lst->nbr < min->nbr)
			min = lst;
		lst = lst->next;
	}
	return (min);
}

t_stack	*ft_max(t_stack *lst)
{
	t_stack	*max;

	if (!lst)
		return (0);
	max = lst;
	while (lst)
	{
		if (lst->nbr > max->nbr)
			max = lst;
		lst = lst->next;
	}
	return (max);
}

int	ft_stack_size(t_stack *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	ft_stackadd_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
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
