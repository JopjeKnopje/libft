/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:49:21 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/18 11:58:38 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcat(char *dest, const char *src, size_t size)
{

	size_t offset;
	size_t i;
	
	offset = ft_strlen(dest);
	if (size <= offset)
		return (size + ft_strlen(src));

	i = 0;
	while (src[i] && i + offset < size - 1)
	{
		dest[offset + i] = src[i];
		i++;
	}
	dest[offset + i] = 0;

	return (offset + ft_strlen(src));
}
