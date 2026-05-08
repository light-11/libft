/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:43:50 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/08 17:52:05 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	else
		return (c);
}
//#include <stdio.h>

//int	main(void)
//{
//	printf("%c\n", ft_toupper('d'));
//	printf("%c\n", ft_toupper('E'));
//}
