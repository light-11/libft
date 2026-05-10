/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42.ja>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 15:19:38 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/10 21:35:05 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	s_len;
	size_t	j;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		new_s = malloc(1);
		if (!new_s)
			return (NULL);
		new_s[0] = '\0';
		return (new_s);
	}
	new_s = malloc(len + 1);
	if (!new_s)
		return (NULL);
	j = 0;
	while (j < len && s[start + j])
	{
		new_s[j] = s[start + j];
		j++;
	}
	new_s[j] = '\0';
	return (new_s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[14] = "hello world!!";

// 	printf("%s\n", ft_substr(str, 6, 5));
// }
