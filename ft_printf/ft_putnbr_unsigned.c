/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 17:50:15 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/03 18:52:18 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	int		count;

	count = 0;
	if (n < 10)
		count += ft_putchar(n + '0');
	else
	{
		count += ft_putnbr_unsigned((n / 10));
		count += ft_putchar((n % 10) + '0');
	}
	return (count);
}
/*int main()
{
	unsigned int u = -1;
	ft_printf("test %u", u);
}*/