/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyildiri <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:58:15 by tyildiri          #+#    #+#             */
/*   Updated: 2022/02/07 20:58:34 by tyildiri         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(char *buf);
char	*get_next_line(int fd);
char	*get_new_line(char *buffer);
char	*get_line(int fd, char *buffer);
int		find_nl_char(char *buffer);
char	*strjoin(char *s1, char *s2);
char	*get_new_buffer(char *buffer);

#endif
