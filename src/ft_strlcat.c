/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:49:21 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/10 13:24:08 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;


	j = 0;
	while (src[j] && j + i < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[j + i] = 0;

	return (0);
}
