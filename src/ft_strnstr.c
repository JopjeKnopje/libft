/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 14:32:54 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/10 15:39:34 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char*) haystack);
	
	i = 0;
	while (haystack[i] && needle[i] && i < n)
	{
		j = 0;
		while  (haystack[i + j] == needle[j])
		{
			if (!needle[j])
				return ((char*) haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}