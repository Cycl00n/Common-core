/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:38:35 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/21 12:43:26 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int push_swap(int arg_count, ...)
{
	va_list	arg;
	int	a;
	int value;
	
	va_start(arg, arg_count);
	for(a = 0; a <= arg_count; a++)
	{
		value = va_arg(arg, int);
		ft_printf("%d \n", a);
		
	va_end(arg);
	return(0);
}

int main()
{
	push_swap(1,2,3,4,5);
	return(0);
}