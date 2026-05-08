/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42.ja>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:56:27 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/08 09:50:17 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*char_s;
	size_t		i;

	char_s = (const char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)char_s[i] == (unsigned char)c)
			return ((void *)&char_s[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[6] = "hello";

// 	printf("%s\n", (char *)ft_memchr(str, 'e', 3));
// }
