/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:21:12 by ayanaga           #+#    #+#             */
/*   Updated: 2026/04/29 17:42:50 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new_s;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	new_s = malloc(sizeof(char) * (i + j + 1));
	if (!new_s)
		return (NULL);
	i = 0;
	while (*s1)
	{
		new_s[i++] = *s1++;
	}
	while (*s2)
	{
		new_s[i++] = *s2++;
	}
	new_s[i] = '\0';
	return (new_s);
}
#include <stdio.h>

int	main(void)
{
	char	str1[6] = "Hello";
	char	str2[6] = "World";

	printf("%s\n", ft_strjoin(str1, str2));
}
