/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 10:39:01 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/08 14:23:33 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		cpt++;
	}
	return (cpt);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s;
	size_t	j;

	j = 0;
	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	s = (char *)malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	while (j < nmemb * size)
	{
		s[j] = 0;
		j++;
	}
	return (s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i ++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		j ++;
		i ++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	len;
	char	*s;

	len = ft_strlen(str) + 1;
	s = (char *)malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		s[i] = str[i];
	return (s);
}
