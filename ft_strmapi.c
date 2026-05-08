/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 19:47:14 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/08 17:51:28 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	s_len(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*new_s;

	i = 0;
	len = s_len(s);
	new_s = malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	while (len > i)
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

//#include <stdio.h>

//char	test_func(unsigned int i, char c)
//{
//	if (i % 2 == 0 && c >= 'a' && c <= 'z')
//		return (c - 32);
//	return (c);
//}

//int	main(void)
//{
//	char	*result;

//	result = ft_strmapi("abcdef", test_func);
//	if (!result)
//		return (1);
//	printf("%s\n", result);
//	free(result);
//	return (0);
//}
