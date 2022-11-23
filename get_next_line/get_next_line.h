/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:28:42 by aalremei          #+#    #+#             */
/*   Updated: 2022/11/21 13:30:21 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE  1
#endif

//for read function
// # include <sys/types.h>
// # include <sys/uio.h>
# include <unistd.h>

// for size_t & NULL
# include <stdlib.h>
// for open
#include <fcntl.h>
// for printf
#include <stdio.h>
// for memset
#include <string.h>
#include <limits.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *store, char *bufr);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
char	*ft_lineout(char *dest, char *src);
char	*ft_new_store(char *str);
int		ft_find_n(char *str);

#endif