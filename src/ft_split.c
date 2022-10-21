/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:47:26 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/21 09:55:24 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	count_words(char const *s, char c)
{
	int i;
	int at_word;
	int count;

	count = 0;
	i = 0;
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
	printf("%d\n", count);
	return count;

}
// count words
// malloc string array
// substr the words
char	**ft_split(char const *s, char c)
{
	int word_count = count_words(s, c);
	int i;

	char **split = (char **) malloc((word_count + 1) * sizeof(char **));
	if (split)
		return (NULL);

	i = 0;
	while (i <= word_count)
	{
		

	}

		
	return NULL;
}
