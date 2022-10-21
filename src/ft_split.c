/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:47:26 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/21 16:24:52 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(char const *s, char c)
{
	int i;
	int count;
	int at_word;

	i = 0;
	count = 0;
	at_word = 0;
	while (s[i])
	{
		if (s[i] != c && !at_word)
		{
			at_word = 1;
			count++;
		}
		else if (s[i] == c)
			at_word = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int word_count = count_words(s, c);
	int i;
	int j;
	int start;
	char **s_split;

	s_split = (char **) malloc((word_count + 1) * sizeof(char **));
	if (!s_split)
		return (NULL);
	i = 0;
	j = 0;
	start = 0;
	while (word_count)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c) 
			i++;
		s_split[j] = ft_substr(s, start, i - start);
		j++;
		word_count--;
	}
	s_split[j] = 0;
	return (s_split);
}
