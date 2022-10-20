/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:47:26 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/20 09:34:48 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// count words
// malloc string array
// substr the words
char	**ft_split(char const *s, char c)
{
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

		
	return NULL;
}
