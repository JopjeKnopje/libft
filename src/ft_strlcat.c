/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:49:21 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/06 13:27:11 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	int	i;
	int offset;

	if (!size)
		return ft_strlen(dest) - 1;

	i = 0;
	offset = ft_strlen(dest);
	while (i < (int) size)
	{
		dest[offset + i] = src[i];
		i++;
	}
	dest[i] = 0;
	return ft_strlen(src);
}
