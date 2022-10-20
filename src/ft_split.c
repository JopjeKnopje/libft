/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:47:26 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/20 14:40:07 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		printf("%c\n", s[i]);
		if (s[i] != c)
			count++;
		while (s[i] == c)
			i++;
	}
	printf("count %d\n", count);
	return (count);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	count_words(s, c);

		

	return NULL;
}
