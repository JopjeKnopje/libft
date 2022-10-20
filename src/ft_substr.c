/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 11:38:15 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/20 15:06:06 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;		
	char	*s_d;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!s)
		return (ft_strdup(""));
	s_d = malloc((len * sizeof(char)) + 1);
	if (!s_d)
		return (NULL);
	i = 0;
	while (s[i + start] && i < len)
	{
		s_d[i] = s[i + start];
		i++;
	}
	s_d[i] = 0;
	return (s_d);
}
