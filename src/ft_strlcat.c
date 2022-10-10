/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:49:21 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/10 10:02:46 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// termination byte should be included in size
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int offset;

	i = 0;
	offset = ft_strlen(src);
	while (dest[i] && size > 0)
	{
		dest[offset + i] = src[i];
		i++;
	}
	dest[offset + i] = 0;

	return (i);
}
