/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:04:36 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/08 17:54:23 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

//#include <stdio.h>

// int	main(void)
//{
//	printf("%d\n", ft_isdigit('c'));
//	printf("%d\n", ft_isdigit('D'));
//	printf("%d\n", ft_isdigit('1'));
//}
