/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hexa_cap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 19:14:53 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/03 19:33:20 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_hexa_cap(unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n >= 16)
		count += put_hexa_cap(n / 16);
	count += ft_putchar("0123456789ABCDEF"[n % 16]);
	return (count);
}
