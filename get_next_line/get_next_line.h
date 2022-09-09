/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:55:19 by tyildiri          #+#    #+#             */
/*   Updated: 2022/02/07 19:46:40 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

char	*get_next_line(int fd);
char	*get_line(int fd, char *buffer);
size_t	ft_strlen(char *buf);
char	*strjoin(char *s1, char *s2);
int		find_nl_char(char *buffer);
char	*get_new_line(char *buffer);
char	*get_new_buffer(char *buffer);
#endif
