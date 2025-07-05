/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 10:39:03 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/05 11:52:18 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	str_len(char *s1)
{
	int	i;

	i = 0;
	if (!s1)
		return(0);
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
	if (!s1)
	{
		s1 = malloc(1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	result = malloc((str_len(s1) + str_len(s2) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j])
		result[i + j] = s2[j++];
	result[i + j] = '\0';
	free(s1);
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

char	*extract_line(char *s)
{
	int		i;
	char	*line;

	i = 0;
	while (s[i] && s[i] != '\n')
		i ++;
	line = malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != '\n')
		line[i++] = s[i++];
	line[i] = '\0';
	return(line);
}

char *get_next_line(int fd)
{
	static char	*buffer;
	int			bytes;
	char		temp[BUFFER_SIZE + 1];

	if (!temp)
		return (NULL);
	while (!found_newline(buffer))
	{
		bytes = read(fd, temp, BUFFER_SIZE);
		temp[bytes] = '\0';
		buffer = str_join(buffer, temp);
	}
	return (extract_line(buffer));
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
