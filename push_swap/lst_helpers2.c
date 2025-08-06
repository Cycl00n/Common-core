/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_helpers2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:58:11 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/06 12:01:43 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
