/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:50:00 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/08 17:48:45 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}
//#include <stdio.h>

//int	main(void)
//{
//	printf("%d\n", ft_isascii('c'));
//	printf("%d\n", ft_isascii('D'));
//	printf("%d\n", ft_isascii('1'));
//}
