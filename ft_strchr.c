/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:52:59 by ayanaga           #+#    #+#             */
/*   Updated: 2026/04/24 11:05:34 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == '\0')
		return ((char *)&s[i]);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	str[6] = "hello";

	printf("%s\n", ft_strchr(str, 'e'));
	printf("%s\n", ft_strchr(str, '\0'));
}
