/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 20:12:33 by joppe         #+#    #+#                 */
/*   Updated: 2022/10/13 11:46:06 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	find_start(char const *s1, char const *set)
{
	return 0;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	// loop through s1 and compare to each chr in set
	// if one of the s1 chars matches move on to the next char in s1
	// when ever the current char in s1 doens't match any char in set. 
	// we've found the end of the beginning.
	
	int	i;
	int j;
	int matches;
	size_t set_len = ft_strlen(set);
	int start_index;
	start_index = 0;
	i = 0;
	while  (s1[i])
	{
		j = 0;
		matches = 0;
		printf("index %d\n", i);
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				printf("%c == %c\n", s1[i], set[j]);
				matches++;
			}
			j++;

			if (matches && (j >= set_len))
			{
				printf("jup \n");
				start_index++;
			}
		}
		i++;
	}
	printf("start_index %d\n", start_index);

	return NULL;
}
