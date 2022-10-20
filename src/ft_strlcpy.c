/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 09:27:16 by joppe         #+#    #+#                 */
/*   Updated: 2022/10/20 10:26:08 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		len;

	len = ft_strlen(src);
	i = 0;
	if (size <= 0)
		return (len);
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size)
		dest[i] = 0;
	return (len);
}
