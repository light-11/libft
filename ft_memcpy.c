/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:17:57 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/08 17:54:39 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*char_dest;
	const char	*char_src;
	size_t		i;

	char_src = (const char *)src;
	char_dest = (char *)dest;
	i = 0;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

//#include <stdio.h>

// int	main(void)
//{
//	char	dest[6] = "hello";
//	char	src[6] = "world";

//	ft_memcpy(dest, src, 3);
//	printf("%s\n", dest);
//}
