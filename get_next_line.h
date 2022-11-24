/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:28:42 by aalremei          #+#    #+#             */
/*   Updated: 2022/11/24 11:22:02 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//for read function
# include <unistd.h>

// for size_t & NULL
# include <stdlib.h>

size_t	ft_strlen(const char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *store, char *bufr);
char	*ft_lineout(char *src);
char	*ft_new_store(char *str);
int		ft_find_n(char *str);

#endif