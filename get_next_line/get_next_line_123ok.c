/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_123ok.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:47:55 by aalremei          #+#    #+#             */
/*   Updated: 2022/11/22 09:52:00 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd)
{
	static char		*store;
	char			*line;
	char			buf[BUFFER_SIZE + 1];

	while (read(fd, buf, BUFFER_SIZE) > 0)
	{

		if (!store)
			store = ft_strdup("");
		store = ft_strjoin(store, buf);
		if (ft_find_n(store) == 1 || ((buf[0] == '\0') && store))  //searching for \n or read 0(EOF) & store exists
		{
			line = (char *)malloc(sizeof(char));
				if (!line)
					return (NULL);
			ft_lineout(line, store);
			store = ft_new_store(store);	
			return (line);	
		}
	}
	if ((buf[0] == '\0') && !store)
		return (NULL);
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
