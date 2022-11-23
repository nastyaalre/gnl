/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalremei <nastyarv@mail.ru>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:30:07 by aalremei          #+#    #+#             */
/*   Updated: 2022/11/22 09:31:34 by aalremei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s1)				//duplicate string
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

size_t	ft_strlen(const char *str)		//string lenght
{
	size_t	count;

	count = 0;
	while (str[count] != 0)
	{
		count ++;
	}
	return (count);
}
char	*ft_new_store(char *str)		// line after \n
{
	char	*new_str = NULL;
	int		i;

	i = 0;
	new_str = ft_strdup(str);
	// if (ft_find_n(str) == 0)
	// 	return (NULL);
	while (new_str[i] != '\0')
	{
		if (new_str[i] == '\n' && new_str[i + 1] != '\0')
		{
			i++;
			free(str);
			return (&new_str[i]);
		}
		new_str++;
	}
	free(str);
	free (new_str);
	return(NULL);
}

int main(void)
{
	char	str[] = "Hel\nlo";
	printf("%s\n", ft_new_store(str));
}
