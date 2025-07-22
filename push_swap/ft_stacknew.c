/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 15:19:07 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/22 15:19:43 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
