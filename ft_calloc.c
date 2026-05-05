/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 19:59:44 by ayanaga           #+#    #+#             */
/*   Updated: 2026/04/28 20:37:54 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*mem;
	size_t	memsize;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	memsize = nmemb * size;
	mem = malloc(memsize);
	if (!mem)
		return (NULL);
	while (memsize != 0)
	{
		mem[memsize - 1] = 0;
		memsize--;
	}
	return (mem);
}
