/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:13:49 by ayanaga           #+#    #+#             */
/*   Updated: 2026/04/23 18:52:17 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	const char	*char_src;
	size_t	i;

	char_src = (const char *)src;
	char_dest = (char *)dest;
	if (dest >= src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			char_dest[i] = char_src[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	mozi_1[6] = "hello";
	char	mozi_2[6] = "hello";

	ft_memmove(mozi_1, mozi_1 + 2, 3);
	printf("%s\n", mozi_1);
	ft_memmove(mozi_2 + 2, mozi_2, 3);
	printf("%s\n", mozi_2);
}
