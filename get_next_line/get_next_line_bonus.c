/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:51:04 by tyildiri          #+#    #+#             */
/*   Updated: 2022/02/07 21:59:25 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_line(int fd, char *buffer)
{
	char	*buff;
	int		rd_byte;

	rd_byte = 1;
	buff = malloc (sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	while (!find_nl_char(buffer) && rd_byte != 0)
	{
		rd_byte = read (fd, buff, BUFFER_SIZE);
		if (rd_byte == -1)
		{
			free (buff);
			return (NULL);
		}
		buff[rd_byte] = '\0';
		buffer = strjoin(buffer, buff);
	}
	free (buff);
	return (buffer);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		*s_buffer[1025];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 1025)
		return (0);
	s_buffer[fd] = get_line(fd, s_buffer[fd]);
	if (s_buffer[fd] == NULL)
		return (NULL);
	line = get_new_line(s_buffer[fd]);
	s_buffer[fd] = get_new_buffer(s_buffer[fd]);
	return (line);
}
/*
#include<stdio.h>
#include <fcntl.h>
int	main(void)
{
	int	fd = open("tarik.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
}*/
