 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:29:17 by aalremei          #+#    #+#             */
/*   Updated: 2022/11/21 11:58:32 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"
#include "stdio.h"

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("/Users/aalremei/Desktop/get_next_line/file", O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	 printf("%s", line);
	return (0);
}