/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 21:40:42 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/08 17:48:39 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	else
		return (0);
}

//#include <stdio.h>

//int	main(void)
//{
//	printf("%d\n", ft_isalpha('c'));
//	printf("%d\n", ft_isalpha('D'));
//	printf("%d\n", ft_isalpha('1'));
//}
