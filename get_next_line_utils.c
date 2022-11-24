/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:28:40 by aalremei          #+#    #+#             */
/*   Updated: 2022/11/24 10:16:48 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *store, char *bufr)
{
	int		sa;
	int		sb;
	int		len;
	char	*p;

	sa = 0;
	sb = 0;
	if (!store)
		return (bufr);
	if (!bufr)
		return (store);
	len = ft_strlen(store) + ft_strlen(bufr);
	p = (char *)malloc(len * sizeof(char) + 1);
	if (!p)
		return (0);
	while (store[sa] != '\0')
		p[sb++] = store[sa++];
	sa = 0;
	while (bufr[sa] != '\0')
		p[sb++] = bufr[sa++];
	p[sb] = '\0';
	free (store);
	return (p);
}

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != 0)
	{
		count ++;
	}
	return (count);
}

int	ft_find_n(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_new_store(char *str)
{
	int		i;
	int		j;
	char	*post_temp;

	j = 0;
	i = ft_strlen(str);
	if (!str)
		return (NULL);
	while (str[j] != '\n' && str[j])
		j++;
	if (str[j] == '\0')
	{
		free(str);
		return (NULL);
	}
	post_temp = malloc(sizeof(char) * (i - j));
	if (!post_temp)
		return (NULL);
	i = 0;
	j++;
	while (str[j])
		post_temp[i++] = str[j++];
	post_temp[i] = '\0';
	free(str);
	return (post_temp);
}

char	*ft_lineout(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\n' && src[i])
		i++;
	if (src[0] == '\0')
		return (NULL);
	dest = (char *)malloc((sizeof(char) + 1) * i);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{	
		if (src[i] == '\n')
		{
			dest[i] = src[i];
			dest[i + 1] = '\0';
			return (dest);
		}
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
