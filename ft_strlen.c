/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42.ja>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:54:43 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/08 09:41:48 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_strlen("aiueo"));
// 	printf("%d\n", ft_strlen("aiueoneko"));
// 	printf("%d\n", ft_strlen(""));
// }
