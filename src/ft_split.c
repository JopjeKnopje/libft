/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:47:26 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/19 17:26:26 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// count words
// malloc string array
// substr the words
char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	char *delim = (char *) s;
	int len = 0;
	char *s_sub = 0;
	int i = 0;

	while (!i || (delim = ft_strchr(delim + 1, c)))
	{
		if (!(len = ft_strchr(delim, c) - delim))
			len = ft_strlen(delim);
		s_sub = ft_substr(delim, 0, len);
		printf("delim %s\n", delim);
		printf("sub %s\n", s_sub);
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
