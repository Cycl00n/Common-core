/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:32:19 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/03 19:42:44 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	cpt;

	cpt = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[cpt])
	{
		write(1, &str[cpt], 1);
		cpt++;
	}
	return (cpt);
}
