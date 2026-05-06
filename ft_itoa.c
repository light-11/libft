/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:14:58 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/06 16:52:22 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	n_len(long long_n)
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
	int		len;
	char	*str;

	long_n = n;
	if (long_n < 0)
		long_n = long_n * -1;
	len = n_len(long_n);
	str = malloc(len + 1 + (n < 0));
	if (!str)
		return (NULL);
	str[len + (n < 0)] = '\0';
	while (len--)
	{
		str[len + (n < 0)] = (long_n % 10) + '0';
		long_n /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
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
