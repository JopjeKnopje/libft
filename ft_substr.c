/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 11:38:15 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/31 16:18:12 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *s_sub;
	
	if (!s || !(len + 1) || start >= (unsigned int) ft_strlen(s))
		return (ft_strdup(""));
	if (start + len >= (unsigned int) ft_strlen(s))
		len = len - start;
	// hello
	// start: 1
	// len: 5
	// len = len - start
	s_sub = (char *) malloc(sizeof(char) * (len + 1));
	if(!s_sub)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		// printf("char %c\n", s[start + i]);
		s_sub[i] = s[start + i];
		i++;
	}
	s_sub[i] = 0;
	return (s_sub);
}
