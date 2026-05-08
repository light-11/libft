/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:44:24 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/08 17:51:48 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	search(char s1_i, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s1_i == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		start;
	char	*trim;

	start = 0;
	j = 0;
	i = 0;
	while (s1[start] != '\0' && search(s1[start], set))
		start++;
	while (s1[i] != '\0')
		i++;
	while (i > start && search(s1[i - 1], set))
		i--;
	trim = malloc(sizeof(char) * ((i - start) + 1));
	if (!trim)
		return (NULL);
	while (start != i)
	{
		trim[j] = s1[start];
		j++;
		start++;
	}
	trim[j] = '\0';
	return (trim);
}

//#include <stdio.h>

//int	main(void)
//{
//	char	str1[12] = "Hello World";
//	char	str2[5] = "Held";

//	printf("%s\n", ft_strtrim(str1, str2));
//}
