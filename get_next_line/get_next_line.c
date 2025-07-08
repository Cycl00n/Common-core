/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 18:15:22 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/08 14:24:47 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*next_line(char *buff)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	if (!buff[i])
	{
		free(buff);
		return (NULL);
	}
	line = ft_calloc((ft_strlen(buff) - i + 1), sizeof(char));
	if (!line)
		return (NULL);
	i++;
	j = 0;
	while (buff[i])
		line[j++] = buff[i++];
	line[j] = '\0';
	free(buff);
	return (line);
}

char	*joinnfree(char *buffer, char *buff)
{
	char	*temp;

	temp = ft_strjoin(buffer, buff);
	free(buffer);
	return (temp);
}

static char	*read_f(int fd, char *buff)
{
	char	*buffer;
	int		bytes;

	if (!buff)
		buff = ft_strdup("");
	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buffer);
			free(buff);
			return (NULL);
		}
		buffer[bytes] = '\0';
		buff = joinnfree(buff, buffer);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	free(buffer);
	return (buff);
}

static char	*read_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer || buffer[0] == '\0')
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*result;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_f(fd, buffer);
	if (!buffer || buffer[0] == '\0')
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	result = read_line(buffer);
	buffer = next_line(buffer);
	return (result);
}
