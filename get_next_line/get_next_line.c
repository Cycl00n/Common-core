/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 10:39:03 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/04 14:41:31 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	str_len(char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

char *str_join(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*result;

	j = 0;
	i = 0;
	result = malloc(((str_len(s1) + str_len(s2)) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		result[i + j] = s2[j];
		j ++; 
	}
	result[i + j] = '\0';
	return (result);
}
int	found_newline(char *s)
{
	int	i;

	i = 0;
	if(!s)
		return(0);
	while(s[i])
	{
		if(s[i] == '\n')
			return(1);
		i++;
	}
	return(0);
}

char *get_next_line(int fd)
{
	static char	*buffer;
	char		*line;
	int			i;
	int			bytes_read;

	i = 0;
	while (!found_newline(buffer))
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		buffer = str_join(buffer, line);
	}
	return (line);
}


#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int fd = open("test.txt", O_RDONLY);
	char *line;
	if (fd < 0)
		return 1;
	while((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}

	close(fd);
	return 0;
}
