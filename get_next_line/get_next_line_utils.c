/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 10:39:01 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/04 13:25:02 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char **split_lines(char *str)
{
	int		i;

	i = 0;
	while(str)
	{
		if(str[i] == '\n')
		{
			str[i] = '\0';
			return(&(str[i]));
		}
	}
}