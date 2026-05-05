/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:52:50 by ayanaga           #+#    #+#             */
/*   Updated: 2026/04/23 15:54:04 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isprint('c'));
	printf("%d\n", ft_isprint('D'));
	printf("%d\n", ft_isprint('1'));
	printf("%d\n", ft_isprint(10));
}
