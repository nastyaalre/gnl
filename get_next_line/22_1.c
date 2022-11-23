/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   22_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:47:55 by aalremei          #+#    #+#             */
/*   Updated: 2022/11/22 10:06:02 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd)
{
	static char		*store;
	char			*line;
	char			buf[BUFFER_SIZE + 1];
	int				b_read;

	b_read = 1;
	while (b_read != 0)
	{
		b_read = read(fd, buf, BUFFER_SIZE);
		if (b_read <= 0 && !store)
			return (NULL);
		if (b_read > 0)
		{
			if (!store)
				store = ft_strdup("");
			store = ft_strjoin(store, buf);
		}
		if (ft_strchr(store, '\n') != 0 || b_read < BUFFER_SIZE)
		{
			line = (char *)malloc(sizeof(char));
				if (!line)
					return (NULL);
			ft_lineout(line, store);
			store = ft_strchr(store);	
			return (line);	
		}
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	char	*line_out;

	line_out = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line_out = ft_read(fd);
	return (line_out);
}
