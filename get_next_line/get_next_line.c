/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 18:15:22 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/07 20:28:40 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
char	*read_line(int fd, char *buffer)
{
	int	bytes;
	int	i;

	i = 0;
	bytes = 0;
	bytes = read(fd, buffer, BUFFER_SIZE);
	while(buffer[i] && buffer[i] != '\n')
	{
		i++;
	}
	if(buffer[i] == '\n')
		return(buffer);
}
char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*result;
	if(!fd || BUFFER_SIZE <= 0)
		return(NULL);
	result = ft_strdup(read_line(fd,buffer));
	return(result);
}

#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd = open("test.txt", O_RDONLY);
	char *line;
	printf("%s",line = get_next_line(fd));
	free(line);
	close(fd);
	return(0);
}