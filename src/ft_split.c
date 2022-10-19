/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:47:26 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/19 15:48:08 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// count words
// malloc string array
// substr the words
char	**ft_split(char const *s, char c)
{

	char *delim = s;
	int i = 0;
	while (delim = ft_strchr(delim, c))
	{
		delim++;
		if ((delim[0] != delim[-1]))
		{
			printf("%s\n", (delim));
		}
		i++;
	}
		
	// char *delim = ft_strchr(s, c);
	// int delim_index = (delim - s);
	// char *pre = ft_substr(s, 0, delim_index);
	// char *post = ft_substr(s, delim_index + 1, ft_strlen(delim + 1));
	// 
	// char **s_split = (char **) malloc((sizeof(char **) * 2) + 1);
	// s_split[0] = pre;
	// s_split[1] = post;
	// s_split[2] = 0;
	return NULL;
}
