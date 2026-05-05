/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:14:58 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/05 18:56:25 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	n_len(long long_n)
{
	int	i;

	i = 0;
	if (long_n == 0)
		i = 1;
	else
	{
		while (long_n != 0)
		{
			long_n = long_n / 10;
			i++;
		}
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	long_n;
	int		i;
	int		minus;
	char	*char_n;

	minus = 0;
	long_n = (long)n;
	if (long_n < 0)
	{
		minus = 1;
		long_n = long_n * -1;
	}
	i = n_len(long_n);
	char_n = malloc(sizeof(char) * (i + 1 + minus));
	if (!char_n)
		return (NULL);
	if (long_n == 0)
		char_n[0] = '0';
	if (minus)
		char_n[0] = '-';
	char_n[i + minus] = '\0';
	while (long_n != 0)
	{
		char_n[i - 1 + minus] = long_n % 10 + '0';
		long_n = long_n / 10;
		i--;
	}
	return (char_n);
}

#include <stdio.h>

int	main(void)
{
	int	n1;
	int	n2;
	int	n3;
	int	n4;

	n1 = 12345678;
	n2 = -12345678;
	n3 = 0;
	n4 = -2147483648;
	printf("%s\n", ft_itoa(n1));
	printf("%s\n", ft_itoa(n2));
	printf("%s\n", ft_itoa(n3));
	printf("%s\n", ft_itoa(n4));
}
