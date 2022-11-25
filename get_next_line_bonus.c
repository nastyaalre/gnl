/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:47:55 by aalremei          #+#    #+#             */
/*   Updated: 2022/11/24 14:28:54 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	ptr = (char *)malloc(len * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static char	*ft_read(int fd)
{
	static char		*store[1024];
	char			*line;
	char			buf[BUFFER_SIZE + 1];
	int				r;

	r = 1;
	while (r >= 0)
	{	
		r = read(fd, buf, BUFFER_SIZE);
		if (r <= 0 && !store[fd])
			return (NULL);
		buf[r] = '\0';
		if (!store[fd])
			store[fd] = ft_strdup("");
		store[fd] = ft_strjoin(store[fd], buf);
		if (ft_find_n(store[fd]) == 1 || ((buf[0] == '\0') && store[fd]))
		{
			line = ft_lineout(store[fd]);
			store[fd] = ft_new_store(store[fd]);
			return (line);
		}
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	char	*line_out;

	line_out = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE > 2147482646)
		return (NULL);
	line_out = ft_read(fd);
	return (line_out);
}
