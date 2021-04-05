/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balbuque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:41:53 by balbuque          #+#    #+#             */
/*   Updated: 2021/03/23 18:04:43 by balbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	has_returned(char *s)
{
	int			i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char		*get_line(char *s)
{
	int			i;
	char		*line;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != '\n')
	{
		line[i] = s[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char		*save_rest_line(char *s)
{
	int			i;
	int			j;
	char		*str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	if (!s[i])
	{
		free(s);
		return (0);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) - i + 1));
	if (!str)
		return (NULL);
	i++;
	while (s[i])
		str[j++] = s[i++];
	str[j] = '\0';
	free(s);
	return (str);
}

static int	output(int r)
{
	if (r == 0)
		return (0);
	return (1);
}

int			get_next_line(int fd, char **line)
{
	static char *s[10000];
	char		*buffer;
	int			r;

	r = 1;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (-1);
	if (fd < 0 || line == NULL || BUFFER_SIZE <= 0)
	{
		free(buffer);
		return (-1);
	}
	while (r > 0 && (!(has_returned(s[fd]))))
	{
		if ((r = read(fd, buffer, BUFFER_SIZE)) == -1)
		{
			free(buffer);
			return (-1);
		}
		buffer[r] = '\0';
		s[fd] = ft_strjoin(s[fd], buffer);
	}
	free(buffer);
	*line = get_line(s[fd]);
	s[fd] = save_rest_line(s[fd]);
	return (output(r));
}
