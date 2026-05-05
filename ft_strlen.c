/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:54:43 by ayanaga           #+#    #+#             */
/*   Updated: 2026/04/23 16:01:22 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strlen("aiueo"));
	printf("%d\n", ft_strlen("aiueoneko"));
	printf("%d\n", ft_strlen(""));
}
