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
	int a = open("/Users/aalremei/Desktop/get_next_line/gnlTester/files/41_with_nl", O_RDONLY);
	char *str = get_next_line(a);
	printf("%s\n", str);
	char *str1 = get_next_line(a);
	printf("%s\n", str1);
	// char *str2 = get_next_line(a);
	// printf("%s\n", str2);
	// char *str3 = get_next_line(a);
	// printf("%s\n", str3);
	// char *str4= get_next_line(a);
	// printf("%s\n", str4);
	// char *str5 = get_next_line(a);	
	// printf("%s\n", str5);
	// char *str6 = get_next_line(a);
	// printf("%s\n", str6);
	// char *str7 = get_next_line(a);
	// printf("%s\n", str7);
	// char *str8 = get_next_line(a);	
	// printf("%s\n", str8);
	// char *str9 = get_next_line(a);
	// printf("%s\n", str9);
	// char *str10 = get_next_line(a);
	// printf("%s\n", str10);
	
}