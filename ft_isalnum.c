/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:23:39 by ayanaga           #+#    #+#             */
/*   Updated: 2026/04/23 15:48:43 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122) || ('0' <= c && c <= '9'))
		return (1);
	else
		return (0);
}
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalnum('c'));
	printf("%d\n", ft_isalnum('D'));
	printf("%d\n", ft_isalnum('1'));
}
