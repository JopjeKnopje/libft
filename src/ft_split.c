/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:47:26 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/19 10:35:52 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// when  splitting we should discard the delim
char	**ft_split(char const *s, char c)
{
	// count len until delim and allocate for that
	// count len from delim until end and allocate for that

	char *delim = ft_strchr(s, c);
	int split_offset = delim - s;
	printf("split index %d at %c\n", split_offset, s[split_offset]);
	
	char *s1 = (char *) malloc(split_offset + 1);
	ft_strlcpy(s1, s, split_offset + 1);
	printf("s1 %s\n", s1);
	
	int post_size = ft_strlen(s) - split_offset;
	printf("post_size %d %c \n", post_size, s[post_size]);
	delim++;
	char *s2 = (char *) malloc(post_size + 1);
	ft_strlcpy(s2, delim, post_size + 1);


	printf("s %s | pre %s | post %s\n", s, s1, s2);
	return 0;
}
