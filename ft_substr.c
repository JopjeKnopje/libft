/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 11:38:15 by jboeve        #+#    #+#                 */
/*   Updated: 2022/11/01 17:39:09 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s_sub;

	s_sub = malloc(sizeof(char) * (len + 1));
	if (!s_sub)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		s_sub[i] = s[start + i];
		i++;
	}
	s_sub[i] = 0;
	return (s_sub);
}
