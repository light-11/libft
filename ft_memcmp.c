/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:54:13 by ayanaga           #+#    #+#             */
/*   Updated: 2026/04/23 20:09:20 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*char_s1;
	const char	*char_s2;
	size_t		i;

	char_s1 = (const char *)s1;
	char_s2 = (const char *)s2;
	i = 0;
	while (i < n)
	{
		if (char_s1[i] != char_s2[i])
			return (char_s1[i] - char_s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	str1[6] = "aiueo";
	char	str2[6] = "aiuko";

	printf("%d\n", ft_memcmp(str1, str2, 4));
}
