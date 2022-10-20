/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:47:26 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/20 12:59:02 by jboeve        ########   odam.nl         */
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

char	*get_next(char const *s, char c)
{
	int	i;
	char *delim;

	i = 0;
	delim = (char *) s;
	while (!i || (delim = ft_strchr(delim + 1, c)))
	{
		delim++;
		if (!(ft_strchr(delim + 1, c)))
			break ;
		if (delim[0] == c)
			continue ;
		// return delim;
		i++;
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int i;
	char *delim;
	int word_count;
	char **split;

	word_count = count_words(s, c);
	split = (char **) ft_calloc((word_count + 1), sizeof(char **));

	char *start = get_next(s, c);
	char *end = get_next(start, c);
	printf("start %s\n", start);
	printf("end %s\n", end);

	int len = (ft_strlen(start) - ft_strlen(end));
	printf("len %d\n" , len);
	char *sub = ft_substr(start, 0, len);

	printf("%s\n", sub);	


	// loop through word count
	// get the next first occourance of the delimiter
	// get length delim_end - delim_start
	// put in array



	
	free(split);

	return NULL;
}
