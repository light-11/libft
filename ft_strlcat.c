/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:03:17 by ayanaga           #+#    #+#             */
/*   Updated: 2026/04/24 10:42:34 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size && dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (i == size)
		return (size + j);
	while (src[k] != '\0' && i + k < size - 1)
	{
		dst[i + k] = src[k];
		k++;
	}
	if (i + k < size)
		dst[i + k] = '\0';
	return (i + j);
}
#include <stdio.h>

int	main(void)
{
	char		str1[11] = "aiueo";
	const char	str2[6] = "aiuko";

	printf("%zu\n", ft_strlcat(str1, str2, 11));
}
