/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42.ja>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:01:48 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/08 09:44:03 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*char_s;

	i = 0;
	char_s = (char *)s;
	while (n != 0)
	{
		char_s[i] = c;
		n--;
		i++;
	}
	return (s);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	mozi[6] = "hello";

// 	ft_memset(mozi, 'a', 3);
// 	printf("%s\n", mozi);
// }
