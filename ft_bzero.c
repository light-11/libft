/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:13:15 by ayanaga           #+#    #+#             */
/*   Updated: 2026/04/23 16:17:22 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*char_s;
	int		i;

	i = 0;
	char_s = (char *)s;
	while (n != 0)
	{
		char_s[i] = '\0';
		n--;
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	char	mozi[10] = "hello";

	ft_bzero(mozi, 3);
	printf("%s\n", mozi);
	printf("%c\n", mozi[2]);
	printf("%c\n", mozi[3]);
	printf("%c\n", mozi[4]);
}
