/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayanaga <ayanaga@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:59:32 by ayanaga           #+#    #+#             */
/*   Updated: 2026/05/08 17:50:04 by ayanaga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static void	word_insert(char const *s, char c, char **s_words)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	k = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
		{
			s_words[j][k] = s[i];
			k++;
			i++;
		}
		s_words[j][k] = '\0';
		k = 0;
		j++;
	}
}

static void	free_words(char **words, int k)
{
	while (k > 0)
	{
		k--;
		free(words[k]);
	}
	free(words);
}

static char	**word_malloc(char const *s, char c, char **s_words)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
		{
			j++;
			i++;
		}
		s_words[k] = malloc(sizeof(char) * (j + 1));
		if (!s_words[k])
			return (free_words(s_words, k), NULL);
		k++;
	}
	return (s_words);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**s_words;

	count = count_word(s, c);
	s_words = malloc(sizeof(char *) * (count + 1));
	if (!s_words)
		return (NULL);
	s_words = word_malloc(s, c, s_words);
	if (!s_words)
		return (NULL);
	word_insert(s, c, s_words);
	s_words[count] = NULL;
	return (s_words);
}

//#include <stdio.h>

//int	main(void)
//{
//	char	str[12] = "Hello World";
//	char	c;
//	char	**words;

//	c = 'o';
//	words = ft_split(str, c);
//	printf("%s\n", words[0]);
//	printf("%s\n", words[1]);
//	printf("%s\n", words[2]);
//	free_words(words, 3);
//}
