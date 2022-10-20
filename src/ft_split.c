/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:47:26 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/20 12:46:00 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// count words
// malloc string array
// substr the words

int	count_words(char const *s, char c)
{
	char	*delim;
	int		word_count;

	delim = (char *) s;
	word_count = 0;
	while (!word_count || (delim = ft_strchr(delim + 1, c)))
	{
		delim++;
		if (!(ft_strchr(delim + 1, c)))
			break ;
		if (delim[0] == c)
			continue ;
		word_count++;
	}
	return word_count;
}


char	**ft_split(char const *s, char c)
{
	int i;
	char *delim;
	int word_count;
	char **split;

	i = 0;
	word_count = count_words(s, c);
	split = (char **) ft_calloc((word_count + 1), sizeof(char **));

	delim = (char *) s;
	while (!i || (delim = ft_strchr(delim + 1, c)))
	{
		delim++;
		if (!(ft_strchr(delim + 1, c)))
			break ;
		if (delim[0] == c)
			continue ;
		
		printf("%s\n", delim);
		i++;
	}

	
	free(split);

	return NULL;
}
