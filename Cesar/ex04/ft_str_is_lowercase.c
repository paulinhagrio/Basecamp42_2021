/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguimara <pguimara@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 02:09:16 by cde-paul          #+#    #+#             */
/*   Updated: 2021/07/30 01:21:03 by pguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			i++;
		}
		else if (c == '\0')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	
	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str1 = "abcdefghi";
	str2 = "Abcdefghi";
	str3 = "abc:efghi";
	str4 = "abcdefgh2";
	printf("str1: %s, is_lowercase: %d\n", str1, ft_str_is_lowercase(str1));
	printf("str2: %s, is_lowercase: %d\n", str2, ft_str_is_lowercase(str2));
	printf("str3: %s, is_lowercase: %d\n", str3, ft_str_is_lowercase(str3));
	printf("str4: %s, is_lowercase: %d\n", str4, ft_str_is_lowercase(str4));
	return (0);
}



