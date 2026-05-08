/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:26:48 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/08 17:49:52 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	long_n;
	char	char_n;

	long_n = (long)n;
	if (long_n < 0)
	{
		write(fd, "-", 1);
		long_n = long_n * -1;
	}
	if (long_n >= 10)
		ft_putnbr_fd((int)(long_n / 10), fd);
	char_n = long_n % 10 + '0';
	write(fd, &char_n, 1);
}

//int	main(void)
//{
//	ft_putnbr_fd(1, 1);
//	write(1, "\n", 1);
//	ft_putnbr_fd(12345, 1);
//	write(1, "\n", 1);
//	ft_putnbr_fd(-12345, 1);
//	write(1, "\n", 1);
//	ft_putnbr_fd(0, 1);
//	write(1, "\n", 1);
//	ft_putnbr_fd(-2147483648, 1);
//}
