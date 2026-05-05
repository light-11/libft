/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 15:19:38 by ayanaga           #+#    #+#             */
/*   Updated: 2026/04/29 15:52:30 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new_s;
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	new_s = malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	while (j < len && s[start + j] != 0)
	{
		new_s[j] = s[start + j];
		j++;
	}
	new_s[j] = '\0';
	return (new_s);
}

#include <stdio.h>

int	main(void)
{
	char	str[14] = "hello world!!";

	printf("%s\n", ft_substr(str, 6, 5));
}
