/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:14:40 by ayanaga           #+#    #+#             */
/*   Updated: 2026/04/24 13:31:55 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (little[k] != '\0')
		k++;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && little[j] != '\0' && i + j < len)
				j++;
		}
		if (k == j)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	str1[6] = "hello";
	char	str2[3] = "ll";
	char	str3[1] = "\0";

	printf("%s\n", ft_strnstr(str1, str2, 4));
	printf("%s\n", ft_strnstr(str1, str2, 3));
	printf("%s\n", ft_strnstr(str1, str3, 3));
}
